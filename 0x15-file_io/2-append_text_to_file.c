#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the file name
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure,
 * or -1 if filename is NULL
 * or 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, bytes_written, text_length;

if (filename == NULL)
return (-1);

file_descriptor = open(filename, O_WRONLY | O_APPEND);
if (file_descriptor == -1)
return (-1);

if (text_content != NULL)
{
for (text_length = 0; text_content[text_length] != '\0'; text_length++)
continue;

bytes_written = write(file_descriptor, text_content, text_length);
if (bytes_written == -1)
{
close(file_descriptor);
return (-1);
}
}
close(file_descriptor);
return (1);



}

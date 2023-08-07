#include "main.h"
/**
 * create_file - creates a file
 * @filename: the file name
 * @text_content: the text to write to the file
 *
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 */
int create_file(const char *filename, char *text_content)
{
int file_descriptor, bytes_written, text_length;

if (filename == NULL)
return (-1);

file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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

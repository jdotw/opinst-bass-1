/*
 * sd.h
 *
 *  Created on: 5 Oct. 2021
 *      Author: jwilson
 */

#ifndef INC_SD_H_
#define INC_SD_H_

void sd_init(void);
void sd_test(void);
bool sd_mkdir(char *path);
bool sd_write(char *filename, char *content, uint32_t content_len);
bool sd_read(char *filename, char *buf, size_t len, size_t *num_read);

#endif /* INC_SD_H_ */

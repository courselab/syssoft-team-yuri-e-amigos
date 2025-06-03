/*
 *    SPDX-FileCopyrightText: 2021 Monaco F. J. <monaco@usp.br>
 *    SPDX-FileCopyrightText: 2025 ViniMacedo <vii-30@usp.br>
 *   
 *    SPDX-License-Identifier: GPL-3.0-or-later
 *
 *  This file is a derivative of SYSeg (https://gitlab.com/monaco/syseg)
 *  and includes modifications made by the following author(s):
 *  Lucas Pereira <pereira_lucas@usp.br>
 */

#include <stdio.h>

extern char key_reader(void);

int main(void)   
{
  char key_pressed[2];
  key_pressed[1] = '\0';

  printf("Lendo Teclado\r\n");

  for(;;){
    key_pressed[0] = key_reader();
    printf("Tecla ");
    printf(key_pressed);
    printf(" pressionada\r\n");

    if(key_pressed[0] == 'q') break;
  }
  printf("Leitura encerrada\r");

  return 0;
}





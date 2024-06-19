#include <stdio.h>

int main() {
  char hexData[10];
  int i = 0;

  while (1) {
    printf("Enter hexadecimal data (or 0x02 to stop): ");
    scanf("%x", &hexData[i]);

    if (hexData[i] == 0x02) {
      break;
    }

    i++;

    if (i == 10) {
      printf("\nMaximum number of entries reached. Stopping...\n");
      break;
    }
  }

  printf("\nHexadecimal data in char format:\n");
  for (int j = 0; j < i; j++) {
    printf("%c", hexData[j]);
  }

  return 0;
}

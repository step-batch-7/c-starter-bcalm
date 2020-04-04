#include <stdio.h>
void decryption(int *encrypted_message, char *decrypted_message, int message_length)
{
  for (int rotation = 1; rotation <= 26; rotation++)
  {
    for (int term = 0; term < 9; term++)
    {
      int middle_character = encrypted_message[term] >= 96 ? 109 : 77;
      decrypted_message[term] = encrypted_message[term] > middle_character ? encrypted_message[term] - rotation : encrypted_message[term] + rotation;
    }
  }
}
int main(void)
{
  char decrypted_message[9];
  int encrypted_message[9] = {116, 98, 32, 112, 98, 101, 98, 97, 110};
  int message_length = 9;
  decryption(encrypted_message, decrypted_message, message_length);
  return 0;
}

//Correct rotation number is 13
//Answer is go corona

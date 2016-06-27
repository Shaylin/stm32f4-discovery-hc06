#include "bluetooth.h"

int main(void)
{
	initBluetooth();
	while(1)
	{
	  if(rcvMessageFlag)
	  {
		  //Respond to the message
		  sendBluetoothString("Message Received!\r\n");
		  rcvMessageFlag=0;
	  }
	}
}

void EVAL_AUDIO_TransferComplete_CallBack(uint32_t pBuffer, uint32_t Size){return;}
uint16_t EVAL_AUDIO_GetSampleCallBack(void){return -1;}

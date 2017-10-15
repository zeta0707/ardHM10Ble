# ardHM10Ble
Bluetooth HM10 Demo Code with Android BT App

btATTest.ino: AT command tester
bt-HM10-2560.jpg: HM-10 - Arduino Mega 2560 connection diagram
bt-HM10-Uno.jpg: HM-10 - Arduino Uno connection diagram
hm10-Uno.fzz: Arduino Uno fritzning diagram
hm10-2560.fzz: Arduino Mega 250 fritzning diagram
btHM10.ino: Bluetooth HM-10 demo code
  . __MEGA2560__: 0: Uno, 1: Mega 2560
    Mega 2560: use Serial3
	Uno: Software Serial(D2,D3)
  . NLCR: module type requires NL and CR 
          HM-10, HC-06: 0
		  AT-09: 1
  . BAUDRATE: module initial baud rate
  . ATCOMMAND_NAME_AUTH: AT command send, which change module name and athentication
BAAD Educational BoosterPack MK II - Konami/Contra Cheat Code
http://boosterpackdepot.info/wiki/index.php?title=Educational_BoosterPack_MK_II
 
 Use Joystick & Push buttons to enter the 'secret' Konami/Contra Cheat Code
 Blue LED lights up when correct code is entered.
 Use Serial Monitor window to debug/follow statemachine
 
 Feb 2014 - Initial version created for Edu BP MK II
            
 by Dung Dang
 
 */

//Joystick
const int JOY_X = 2;
const int JOY_Y = 26;
const int JOY_SEL = 5; //Substitute for the Start button

//Push Button/Switch
const int BUTTON_A = 33;
const int BUTTON_B = 32;

int statemachine = 0;

int pressedLeft(void);
int pressedRight(void);
int pressedUp(void);
int pressedDown(void);
int pressedA(void);
int pressedB(void);
int pressedStart(void);

void setup()
{
  // put your setup code here, to run once:
  statemachine =0;
  pinMode(BUTTON_B, INPUT);
  pinMode(BUTTON_A, INPUT);
  pinMode(JOY_SEL, INPUT);
  Serial.begin(115200);
}


void loop()
{
  // put your main code here, to run repeatBAAD:
  Serial.print("State Machine = ");
  Serial.println(statemachine);
  switch (statemachine)
  {
      
    //---UP---
    case 0:        
      if (pressedUp())       //JoyStick Up
        if (backToCenter())    // Then back to center
          statemachine++;  
        else
          statemachine = 0;
      else
        statemachine = 0;  
      break;
      
    //---UP---      
    case 1:      
      if (pressedUp())       //JoyStick Up
        if (backToCenter())    // Then back to center
          statemachine++;  
        else
          statemachine = 0;
      else
        statemachine = 0;  
      break;
      
    //---DOWN---
    case 2:        
      if (pressedDown())       //JoyStick Down
        if (backToCenter())    // Then back to center
          statemachine++;  
        else
          statemachine = 0;
      else
        statemachine = 0;  
      break;
    //---DOWN---      
    case 3:         
      if (pressedDown())       //JoyStick Down
        if (backToCenter())    // Then baBAADo center
          statemachine++;  
        else
          statemachine = 0;
      else
        statemachine = 0;  
      break;  
      
    //---LEFT---           
    case 4:        
      if (pressedLeft())       //JoyStick left
        if (backToCenter())    // Then back to center
          statemachine++;  
        else
          statemachine = 0;
      else
        statemachine = 0;  
      break;
    //---RIGHT---             
    case 5: // Waiting for Right       
      if (pressedRight())       //JoyStick right
        if (backToCenter())    // Then back to center
          statemachine++;  
        else
          statemachine = 0;
      else
        statemachine = 0;  
      break;
    //---LEFT---           
    case 6:        
      if (pressedLeft())       //JoyStick left
        if (backToCenter())    // Then back to center
          statemachine++;  
        else
          statemachine = 0;
      else
        statemachine = 0;  
      break;
    //---RIGHT---             
    case 7: // FILE0  �;    t  8  @                  ef       `           H      �`9>�-� � ʭ��_������`9>�-�                    �          ��p	    0   p          V        na�`9>�-��`9>�-��`9>�-��`9>�-�                        
R e a d M e . t x t   �   0             
  LCD_screen_Logos
  Project
  ----------------------------------
  Developed with embedXcode

  Project LCD_screen_Logos
  Created by Rei VILO on 26/07/13
  Copyright © 2013 Rei Vilo
  Licence All rights reserved



  R erences
  ----------------------------------



  embedXcode
  embedXcode+
  ----------------------------------
  Embedded Computing Template on Xcode 4
  Copyright © Rei VILO, 2010-2013
  All rights reserved
  embedXcode • Jul 20, 2013 release 101 • Stability enhancements
  http://embedXcode.weebly.com/

�����yG                                                                                                                                                                                               FILE0  �	N    gR 8  �                  gR       `           H      �`9>�-��`9>�-�}#�T�-��`9>�-�                    �          ���	    0   p          R     �    �`9>�-��`9>�-��`9>�-��`9>�-�                       L C D _ S C ~ 2       0   x          `     �    �`9>�-��`9>�-��`9>�-��`9>�-�                       L C D _ s c r e e n _ t e s t @   (                ^p���������ܼ�   8             $ I 3 0 0                          TTx h         �`9>�-� � ʭ��_������`9>�-� 0      �&              L C D _ s c r e e n _ t e s t . i n o    TTp Z        gR�`9>�-� � ʭ��_������`9>�-� 0      �&              L C D _ S C ~ 1 . I N O                     �����yG                                                                                                                                                                                                                                                                                       FILE0  �@    TT 8  �                           `           H      �`9>�-� � ʭ��_������`9>�-�                    �          ��p	    0   x          Z        gR�`9>�-��`9>�-��`9>�-��`9>�-� 0                      L C D _ S C ~ 1 . I N O       0   �          h        gR�`9>�-��`9>�-��`9>�-��`9>�-� 0                      L C D _ s c r e e n _ t e s t . i n o �   H                        @        0      �&      �&      1�� �������yG                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              FILE0  �FN       8  �                           `           H      M�;>�-�M�;>�-�ؗ�T�-�M�;>�-�                    �          `��	    0   p          R     �    M�;>�-�M�;>�-�M�;>�-�M�;>�-�                       L E D _ B L ~ 1       0   �          d     �    M�;>�-�M�;>�-�M�;>�-�M�;>�-�                       L E D _ B l i n k _ C o u n t e r     @   (                _p���������ܼ�   @              $ I 3 0 0                          ad� l         M�;>�-� � ʭ��_�����M�;>�-�       �              L E D _ B l i n k _ C o u n t e r . i n o        adp Z          M�;>�-� � ʭ��_�����M�;>�-�       �              L E D _ B L ~ 1 . I N O                     �����yG                                                                                                                                                                                                                                                                       FILE0  *I    ad 8  �                           `           H      M�;>�-� � ʭ��_�����M�;>�-�                    �          ��p	    0   x          Z          M�;>�-�M�;>�-�M�;>�-�M�;>�-�                        L E D _ B L ~ 1 . I N O       0   �          l          M�;>�-�M�;>�-�M�;>�-�M�;>�-�                        L E D _ B l i n k _ C o u n t e r . i n o     �   H                         @              �      �      1��   �����yG                                                                                                                                                                                                                                                                                                                                                      
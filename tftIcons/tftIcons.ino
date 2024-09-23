#include "bitmapsLarge.h" //Arquivo das img em hexa
#include <Adafruit_GFX.h>    // Biblioteca Gráfica GFX
#include <Adafruit_ST7735.h> // Biblioteca para o display ST7735
#include <SPI.h>             // Biblioteca SPI para comunicação

//Conexões Display TFT ST7735 em Ordem
//VCC → 3.3V
//GND → GND
//CS → GPIO 15
//RES → GPIO 4 
//DC → GPIO 2
//SCL → GPIO 18 
//SDA → GPIO 23


// Definir pinos para conexão SPI
#define TFT_CS     15  // Chip select
#define TFT_RST    4   // Reset
#define TFT_DC     2   // Data/Command

// Inicializa o display ST7735 com os pinos definidos
Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);
 

#define BotTela1 21 // Botão 1
#define BotTela12 22 // Botão 2
#define BotTela2 26 // Botão 3
#define BotTela3 16 // Botão 3
int x =0; //Váriavel de transição da tela1
int y = 0;  //Váriavel de transição da tela2 


int estado1;
int estado2;



void setup() 
{
  Serial.begin(115200);
  pinMode(BotTela1, INPUT_PULLUP);
  pinMode(BotTela12, INPUT_PULLUP);
  pinMode(BotTela2, INPUT_PULLUP);
  pinMode(BotTela3, INPUT_PULLUP);

	tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);

//Case 2: Multi Colored Images/Icons
  int h = 120,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(Select + buffidx));
      buffidx++;

     

    } // end pixel
  }
}



void Scroll_baixo(){
   if(!digitalRead(BotTela12))// Se apertar o botão de voltar, ele conta -1 da variavel e volta pra imagem anterior
  {
   x-- ;
    Serial.println(x);
  if (x == 1)
  {
  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto1 + buffidx));
      buffidx++;
 } // end pixel
  }
 
        } 
    
    if (x == 2)
  {
   
  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto2 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
    
    if (x == 3)
  {
  ;

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto3 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 4)
  {


  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto4 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 5)
  {
 

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto5 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 6)
  {
 

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto6 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 7)
  {
   

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto7 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
    
     if (x == 8)
  {
   

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto8 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
    if (x == -1)
  {
      x = 0;
        }  
  } 
}
void Scroll_Alto(){
  if(!digitalRead(BotTela1))
  {
   x++ ;
   Serial.println(x);

   
    
    if (x == 1)
  {

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto1 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
    
    if (x == 2)
  {
    int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto2 + buffidx));
      buffidx++;
        } 
        } 
    } 
    if (x == 3)
  {
  
  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto3 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 4)
  {
    

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto4 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 5)
  {

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto5 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 6)
  {


  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto6 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
     if (x == 7)
  {
   
  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto7 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
    
     if (x == 8)
  {
   

  int h = 160,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(foto8 + buffidx));
      buffidx++;
 } // end pixel
  }
        } 
    if (x == 9)
  {

      x = 0;
        }
  }
  }











void SegundaTela (){
  if(!digitalRead(BotTela2)){
   y++; 


  if (y == 1)
  {
  int h = 161,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(Qt1 + buffidx));
      buffidx++;
 } // end pixel
  }
 
  
  }

  if (y == 2)
  {

  int h = 161,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(Qt2 + buffidx));
      buffidx++;
  } // end pixel
  }

  
  }
  if (y == 3)
  {

  int h = 161,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(Qt3 + buffidx));
      buffidx++;
 } // end pixel
  }

  
  
  }
  if (y == 4)
  {

  int h = 161,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(Qt4 + buffidx));
      buffidx++;
 } // end pixel
  }

   
  
  }
  if (y == 5)
  {

  int h = 161,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(Qt5 + buffidx));
      buffidx++;
  } // end pixel
  }
  
  
  }
  if (y == 6){
  y = 0;  
      }
  }
}

void QrCode (){ 
int z = 0; 
if(!digitalRead(BotTela3))

z = y;

if(z ==1){
  tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);
int h = 150,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(QR1 + buffidx));
      buffidx++;
 } // end pixel
  }
}
if(z ==2){
  tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);
  int h = 150,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(QR2 + buffidx));
      buffidx++;
 } // end pixel
  }
}
if(z ==3){
  tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);
  int h = 150,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(QR3 + buffidx));
      buffidx++;
 } // end pixel
  }
}
if(z ==4){
  tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);
  int h = 150,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(QR4 + buffidx));
      buffidx++;
 } // end pixel
  }
}
if(z == 5){
  tft.initR(INITR_BLACKTAB);
	tft.setRotation(0);
	tft.fillScreen(ST7735_BLACK);
  int h = 150,w = 120, row, col, buffidx=0;
  for (row=0; row<h; row++) { // For each scanline...
    for (col=0; col<w; col++) { // For each pixel...
      //To read from Flash Memory, pgm_read_XXX is required.
      //Since image is stored as uint16_t, pgm_read_word is used as it uses 16bit address
      tft.drawPixel(col, row, pgm_read_word(QR5 + buffidx));
      buffidx++;
 } // end pixel
  }
}

}

void loop(){
  Scroll_baixo();
  Scroll_Alto();
 SegundaTela ();
 QrCode();
}

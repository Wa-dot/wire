#include "simonClass.h" //annexe pour les classes
#include <Arduino.h>

int difficulty = 1;
int numTab = 0;

Nail alpha;
Nail beta;
Nail gamma;
Nail delta;
Nail epsilon;
Nail zeta;
Nail eta;
Nail theta;
Nail iota;
Nail kappa;
#define ledRed 13
#define ledWin A0

void setup()
{

  //Initialisation du port série
  Serial.begin(115200);
  Serial.println("Begin");

  pinMode(ledRed, INPUT);
  pinMode(ledWin, INPUT);
  digitalWrite(ledRed, HIGH);

  switch (difficulty)
  {
  case 1:
    Serial.println("Dif = 1");
    numTab = 2;
    break;

  case 2:
    Serial.println("Dif = 2");
    numTab = 4;
    break;

  case 3:
    Serial.println("Dif = 3");
    numTab = 8;
    break;

  default:
    Serial.println("Erreur numTab");
    break;
  }

  alpha.pinDef(8, numTab);
  beta.pinDef(2, numTab);
  gamma.pinDef(6, numTab);
  delta.pinDef(10, numTab);
  epsilon.pinDef(3, numTab);
  zeta.pinDef(7, numTab);
  eta.pinDef(11, numTab);
  theta.pinDef(9, numTab);
  iota.pinDef(5, numTab);
  kappa.pinDef(4, numTab);
}

void loop()
{
  switch (difficulty)
  { //Pour chaque difficulté on regarde quels sont les pins à relier
  case 1:
    verification(alpha, iota, 0);
    verification(epsilon, theta, 1);
    verification(gamma, kappa, 2);
    break;

  case 2:
    verification(epsilon, theta, 0);
    verification(iota, gamma, 1);
    verification(kappa, alpha, 2);
    verification(zeta, eta, 3);
    verification(beta, delta, 4);
    break;

  case 3:
    verification(iota, eta, 0);
    verification(kappa, delta, 1);
    verification(zeta, gamma, 2);
    verification(beta, alpha, 3);
    verification(alpha, kappa, 4);
    verification(eta, beta, 5);
    verification(gamma, kappa, 6);
    verification(theta, zeta, 7);
    verification(epsilon, delta, 8);

  default:
    Serial.println("ERROR switch verif");
    break;
  }
}

int verification(Nail output, Nail input, int change)
{
  input.inputPin();
  output.outputPin();
  input.readPin(change);
  if (finalResult - 1 == numTab) //On regarde si tout les pings sont connectés
  {
    Serial.println("Victiore");
    digitalWrite(ledRed, LOW);
    digitalWrite(ledWin, HIGH);
  }
}
/*
  Le code fonctionne de la manière suivante:
    Selon la difficulté on va piocher dans un tableau quel pin corresponds à quelle autre.

    level 1 : 
    Alpha iota
    epsilon theta
    gamma kappa

    Level 2 :
    epsilon theta
    iota gamma
    kappa alpha
    zeta eta
    beta delta

    Level 3:
    iota eta
    kappa delta
    zeta gamma
    beta alpha
    alpha kappa
    eta beta
    gamma kappa
    theta zeta 
    epsilon delta

  */
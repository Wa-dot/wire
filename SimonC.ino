#include "simonClass.h" //annexe pour les classes
#include <Arduino.h>

int difficulty = 1;

int numTab =0;

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

Nail easyTab[3][2] = {
    {alpha, iota},
    {epsilon, theta},
    {gamma, kappa}};

Nail interTab[5][2] = {
    {epsilon, theta},
    {iota, gamma},
    {kappa, alpha},
    {zeta, eta},
    {beta, delta}};

Nail diffTab[9][2] = {
    {iota, eta},
    {kappa, delta},
    {zeta, gamma},
    {beta, alpha},
    {alpha, kappa},
    {eta, beta},
    {gamma, kappa},
    {zeta, theta},
    {epsilon, delta}};

void setup()
{

  //Initialisation du port série
  Serial.begin(115200);
  Serial.println("Begin");

  alpha.pinDef(8);
  beta.pinDef(2);
  gamma.pinDef(6);
  delta.pinDef(10);
  epsilon.pinDef(3);
  zeta.pinDef(7);
  eta.pinDef(11);
  theta.pinDef(9);
  iota.pinDef(5);
  kappa.pinDef(4);

  switch (difficulty)
  {
  case 1:
    Serial.println("Dif = 1");
    break;

  case 2:
    Serial.println("Dif = 2");

    break;

  case 1:
    Serial.println("Dif = 3");

    break;

  default:
    Serial.println("Erreur") break;
  }
}

void loop()
{
  /*
  Le code va fonctionné de la manière suivante:
    Selon la difficulté on va piocher dans un tableau quel pin corresponds à quelle autre.

    level 1 : 
    Alpha iota
    epsilon theta
    gamma kappa

    Level 2 :
    Epsilon theta
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
}

int verification(Nail output, Nail input)
{
  input.intpuPin();
  output.outputPin();
  input.readPin()
}
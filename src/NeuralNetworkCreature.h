/*
 * NeuralNetworkCreature.h
 *
 *  Created on: 22.02.2021
 *      Author: jannes
 */

#ifndef NEURALNETWORKCREATURE_H_
#define NEURALNETWORKCREATURE_H_

#include "NeuralNetwork/NeuralNetwork.h"

class NeuralNetworkCreature : public NeuralNetwork
{
private:
	float m_x = -5.0f;

public:
	virtual void Create() override;
	virtual void Update() override;
};

#endif /* NEURALNETWORKCREATURE_H_ */
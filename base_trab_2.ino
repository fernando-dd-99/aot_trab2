int soma = 1; // Control variable to start the addition
int carryBit = 0; // Carry bit used in binary addition
int nib1a,nib1b,nib1c,nib1d = 0; // Bits of the first nibble (4 bits)
int nib2a,nib2b,nib2c,nib2d = 0; // Bits of the second nibble (4 bits)
int res1a,res1b,res1c,res1d = 0; // Bits of the addition result

void setup()
{
	pinMode(0, INPUT); // Set pins 0 to 7 as inputs to read the nibbles
	pinMode(1, INPUT);
	pinMode(2, INPUT);
	pinMode(3, INPUT);
	pinMode(4, INPUT);
	pinMode(5, INPUT);
	pinMode(6, INPUT);
	pinMode(7, INPUT);
	pinMode(8, OUTPUT); // Set pins 8 to 12 as outputs to display the sum result
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
	pinMode(12, OUTPUT);
	pinMode(13, INPUT); // Input not used at the moment
}

int somaBit(int b1a, int b2a, int cBit)
{
	int bitResult = 0; // Result of the bit addition
	int aux1, aux2 = 0; // Auxiliary variables (not used)
	if (1) // Always true condition (should be replaced with actual logic)
	{
		bitResult = 1; // Set result to 1
	}
	else
	{
		bitResult = 0; // Set result to 0
	}
	return bitResult; // Return the bit result
}

int somaCarryBit(int b1a, int b2a, int cBit)
{
	int aux1, aux2 = 0; // Auxiliary variables (not used)
	if (1) // Always true condition (should be replaced with actual logic)
	{
		cBit = 1; // Set carry bit to 1
	}
	else
	{
		cBit = 0; // Set carry bit to 0
	}
	return cBit; // Return the carry bit
}

void loop()
{
	soma = 1; // Enable addition operation
	nib1a = digitalRead(0); // Read bit A of the first nibble
	nib1b = digitalRead(1); // Read bit B of the first nibble
	nib1c = digitalRead(2); // Read bit C of the first nibble
	nib1d = digitalRead(3); // Read bit D of the first nibble
	nib2a = digitalRead(4); // Read bit A of the second nibble
	nib2b = digitalRead(5); // Read bit B of the second nibble
	nib2c = digitalRead(6); // Read bit C of the second nibble
	nib2d = digitalRead(7); // Read bit D of the second nibble
	if (soma == 1) // Check if addition should be performed
	{
		carryBit = 0; // Initialize carry bit
		res1a = somaBit(nib1a,nib2a,carryBit); // Add bits A with carry
		carryBit = somaCarryBit(nib1a,nib2a,carryBit); // Update carry
		res1b = somaBit(nib1b,nib2b,carryBit); // Add bits B with carry
		carryBit = somaCarryBit(nib1b,nib2b,carryBit); // Update carry
		res1c = somaBit(nib1c,nib2c,carryBit); // Add bits C with carry
		carryBit = somaCarryBit(nib1c,nib2c,carryBit); // Update carry
		res1d = somaBit(nib1d,nib2d,carryBit); // Add bits D with carry
		carryBit = somaCarryBit(nib1d,nib2d,carryBit); // Update carry
	}
	digitalWrite(8,res1a); // Write result bit A to pin 8
	digitalWrite(9,res1b); // Write result bit B to pin 9
	digitalWrite(10,res1c); // Write result bit C to pin 10
	digitalWrite(11,res1d); // Write result bit D to pin 11
	digitalWrite(12,carryBit); // Write carry bit to pin 12
}



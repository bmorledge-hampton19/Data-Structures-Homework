
// The Animal class.
class Animal {

};

// The Mouth class.
class Mouth {

};

// The Cat class which inherits Animal and has a Mouth.

class Cat : public Animal {

private:
	Mouth mouth;

};

// The main function.
int main() {

	Cat kitty;

	// Return 0.  Everything is ok!
	return 0;

}
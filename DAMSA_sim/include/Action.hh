#ifndef ACTION_HH
#define ACTION_HH

#include "G4VUserActionInitialization.hh"
#include "PrimaryGeneratorAction.hh"
#include "run.hh"

class MyActionInitialization : public G4VUserActionInitialization {

	public:
	MyActionInitialization();
	~MyActionInitialization();

	virtual void Build() const;

};

#endif

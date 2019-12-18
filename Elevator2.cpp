//	elevatr2.cpp			constructor
#include	<iostream>
#define		FLOORS	10
using	namespace	std;
class	elevator {
private:
	int	floorSelected;
	int	floorNumber;
public:
	elevator();				//	constructor	has	class	name
	void	selectFloor(int	floor);
	void	go();
};
elevator::elevator() {
	floorSelected = 0;
	floorNumber = 0;
}
void	elevator::selectFloor(int	floor) {
	if (floor	<	0 || floor >= FLOORS)
		return;
	floorSelected = floor;
}
void	elevator::go() {
	if (floorNumber	<	floorSelected)
		while (++floorNumber	<	floorSelected)
			cout << "floor:	" << floorNumber << ";	going	up!" << endl;
	else	if (floorNumber	>	floorSelected)
		while (floorNumber	>	floorSelected)
			cout << "floor:	" << floorNumber << ";	going	down!" << endl;
	cout << "floor:	" << floorNumber << ";	stopping." << endl;
}
int	main() {
	elevator	A;					//	constructor	called	here
	A.selectFloor(7);
	A.go();
	return	0;
}
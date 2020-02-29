#include "CarInline.h"

int main(void)
{
	Car eol99;
	char name[] = "eol99";
	eol99.InitMembers(name, 100);
	eol99.Accel();
	eol99.Accel();
	eol99.Accel();
	eol99.ShowCarState();
	eol99.Break();
	eol99.ShowCarState();
	return 0;
}

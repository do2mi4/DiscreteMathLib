MegaRational::MegaRational() {}
MegaRational::MegaRational(MegaInteger) {}

MegaRational::~MegaRational() {}

void MegaRational::reduction() {}
bool MegaRational::isInteger()
{
	return false;
}
MegaInteger MegaRational::toMegaInteger()
{
	MegaInteger ob;
	return ob;
}

bool operator ==(const MegaRational &ob1, const MegaRational &ob2)
{
	return false;
}
bool operator !=(const MegaRational &ob1, const MegaRational &ob2)
{
	return false;
}
bool operator <(const MegaRational &ob1, const MegaRational &ob2)
{
	return false;
}
bool operator >(const MegaRational &ob1, const MegaRational &ob2)
{
	return false;
}
bool operator <=(const MegaRational &ob1, const MegaRational &ob2)
{
	return false;
}
bool operator >=(const MegaRational &ob1, const MegaRational &ob2)
{
	return false;
}

MegaRational operator +(const MegaRational &ob1, const MegaRational &ob2)
{
	MegaRational res;
	return res;
}
MegaRational operator -(const MegaRational &ob1, const MegaRational &ob2)
{
	MegaRational res;
	return res;
}
MegaRational operator *(const MegaRational &ob1, const MegaRational &ob2)
{
	MegaRational res;
	return res;
}
MegaRational operator /(const MegaRational &ob1, const MegaRational &ob2)
{
	MegaRational res;
	return res;
}
MegaRational operator %(const MegaRational &ob1, const MegaRational &ob2)
{
	MegaRational res;
	return res;
}
MegaRational operator -(const MegaRational &ob)
{
	MegaRational ob1;
	ob1 = ob;
	ob1.numerator.isNegative = !ob.numerator.isNegative;
	return ob1;
}
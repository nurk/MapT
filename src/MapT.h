#ifndef MapT_h
#define MapT_h

template <class T> T mapt(T x, T in_min, T in_max, T out_min, T out_max) {
	return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

#endif
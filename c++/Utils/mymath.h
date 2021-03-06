namespace CALC{
#define uniformity energy

template<typename T>
T energy(std::vector<T> & vect){
	T O=0.0;
	typename std::vector<T>::iterator it;

	for (it= vect.begin(); it != vect.end(); it++){
		O+=pow(*it,2);
	};
	return O;
}





template<typename T>
T min(std::vector<T> & vect){
	T O;
	typename std::vector<T>::iterator it;
	it= vect.begin();
	O=*it;

	for (it= vect.begin(); it != vect.end(); it++){
		if (*it<O)
			O=*it;
	};
	return O;
}

template<typename T>
T max(std::vector<T> & vect){
	T O;
	typename std::vector<T>::iterator it;
	it= vect.begin();
	O=*it;

	for (it= vect.begin(); it != vect.end(); it++){
		if (*it>O)
			O=*it;
	};
	return O;
}

template<typename T>
T mean(std::vector<T> & vect){
	T O=0.0;
	typename std::vector<T>::iterator it;

	for (it= vect.begin(); it != vect.end(); it++){
		O+=*it;
	};
	return O/(T)vect.size();
}

template<typename T>
T median(std::vector<T> & vect){

	std::vector<T> cp;
	cp=vect;
	//int size = sizeof(vect)/sizeof(T);
	int size = vect.size();
	std::sort(&cp[0], &cp[size]);
	T O = size % 2 ? cp[size / 2] : (cp[size / 2 - 1] + cp[size / 2]) / 2;
	return O;
};

template<typename T>
T stdvN(std::vector<T> & vect){
	T O=0.0;
	T M=mean(vect);
	typename std::vector<T>::iterator it;

	for (it= vect.begin(); it != vect.end(); it++){
		O+=pow((*it-M),2);
	};
	return std::sqrt(O/((T)vect.size()));

};


template<typename T>
T std(std::vector<T> & vect){
	T O=0.0;
	T M=mean(vect);
	typename std::vector<T>::iterator it;

	for (it= vect.begin(); it != vect.end(); it++){
		O+=pow((*it-M),2);
	};
	return std::sqrt(O/((T)vect.size()-1));

};


template<typename T>
T variance(std::vector<T> & vect){
	T O=0.0;
	T M=mean(vect);
	typename std::vector<T>::iterator it;

	for (it= vect.begin(); it != vect.end(); it++){
		O+=pow((*it-M),2);
	};
	return O/(T)(vect.size()-1);

};

template<typename T>
T range(std::vector<T> & vect){
	return max(vect)-min(vect);
};


template<typename T>
T mad(std::vector<T> & vect){
	T O=0.0;
	T M=mean(vect);
	typename std::vector<T>::iterator it;

	for (it= vect.begin(); it != vect.end(); it++){
		O+=std::abs((*it-M));
	};

	return (O/(T)vect.size());

};


template<typename T>
T kurtosis(std::vector<T> & vect){
	T O=0.0;
	T O2=0.0;
	T M=CALC::mean(vect);
	typename std::vector<T>::iterator it;

	for (it= vect.begin(); it != vect.end(); it++){
		O+=std::pow((*it-M),4);
	O2+=std::pow((*it-M),2);
	};


	return (T)vect.size()*(O / std::pow(O2, 2)) ; 

};


template<typename T>
T skewness(std::vector<T> & vect){
	T O=0.0;
	T M=mean(vect);
	typename std::vector<T>::iterator it;

	for (it= vect.begin(); it != vect.end(); it++){
		O+=std::pow((*it-M),3);
	};



	return (O/(T) vect.size()/std::pow(stdvN(vect),3));

};


//bo	
template<typename T>
T entropy(std::vector<T> & vect){
	T O=0.0;
	typename std::vector<T>::iterator it;

	for (it= vect.begin(); it != vect.end(); it++){
		if( *it > 1e-10 )
		{
			O -=  *it * std::log2( *it );
		}

	};
	return O;

}


template<typename T>
T rms(std::vector<T> & vect){
	T O=0.0;
	typename std::vector<T>::iterator it;

	for (it= vect.begin(); it != vect.end(); it++){
		O += pow(*it,2);
	};
	return sqrt(O/(T)vect.size());

};

template<typename T>
T abs(std::vector<T> & vect){
	T O=0.0;
	typename std::vector<T>::iterator it;

	for (it= vect.begin(); it != vect.end(); it++){
		O+=pow(*it,2);
	};
	return O;
}

}//**namepce end*/

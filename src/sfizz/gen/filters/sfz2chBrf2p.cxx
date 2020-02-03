/* ------------------------------------------------------------
author: "Jean Pierre Cimalando"
license: "BSD-2-Clause"
name: "sfz_filters"
Code generated with Faust 2.20.2 (https://faust.grame.fr)
Compilation options: -lang cpp -inpl -double -ftz 0
------------------------------------------------------------ */

#ifndef  __faust2chBrf2p_H__
#define  __faust2chBrf2p_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 

#include <algorithm>
#include <cmath>
#include <math.h>


#ifndef FAUSTCLASS 
#define FAUSTCLASS faust2chBrf2p
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

class faust2chBrf2p : public dsp {
	
 public:
	
	int fSampleRate;
	double fConst0;
	FAUSTFLOAT fCutoff;
	FAUSTFLOAT fQ;
	double fRec0[2];
	double fRec2[2];
	double fRec1[3];
	double fRec3[2];
	double fRec4[3];
	
 public:
	
	void metadata(Meta* m) { 
	}

	 int getNumInputs() {
		return 2;
	}
	 int getNumOutputs() {
		return 2;
	}
	 int getInputRate(int channel) {
		int rate;
		switch ((channel)) {
			case 0: {
				rate = 1;
				break;
			}
			case 1: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	 int getOutputRate(int channel) {
		int rate;
		switch ((channel)) {
			case 0: {
				rate = 1;
				break;
			}
			case 1: {
				rate = 1;
				break;
			}
			default: {
				rate = -1;
				break;
			}
		}
		return rate;
	}
	
	static void classInit(int sample_rate) {
	}
	
	 void instanceConstants(int sample_rate) {
		fSampleRate = sample_rate;
		fConst0 = (6.2831853071795862 / std::min<double>(192000.0, std::max<double>(1.0, double(fSampleRate))));
	}
	
	 void instanceResetUserInterface() {
		fCutoff = FAUSTFLOAT(440.0);
		fQ = FAUSTFLOAT(0.0);
	}
	
	 void instanceClear() {
		for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) {
			fRec0[l0] = 0.0;
		}
		for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) {
			fRec2[l1] = 0.0;
		}
		for (int l2 = 0; (l2 < 3); l2 = (l2 + 1)) {
			fRec1[l2] = 0.0;
		}
		for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) {
			fRec3[l3] = 0.0;
		}
		for (int l4 = 0; (l4 < 3); l4 = (l4 + 1)) {
			fRec4[l4] = 0.0;
		}
	}
	
	 void init(int sample_rate) {
		classInit(sample_rate);
		instanceInit(sample_rate);
	}
	 void instanceInit(int sample_rate) {
		instanceConstants(sample_rate);
		instanceResetUserInterface();
		instanceClear();
	}
	
	 faust2chBrf2p* clone() {
		return new faust2chBrf2p();
	}
	
	 int getSampleRate() {
		return fSampleRate;
	}
	
	 void buildUserInterface(UI* ui_interface) {
	}
	
	 void compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
		FAUSTFLOAT* input0 = inputs[0];
		FAUSTFLOAT* input1 = inputs[1];
		FAUSTFLOAT* output0 = outputs[0];
		FAUSTFLOAT* output1 = outputs[1];
		double fSlow0 = (fConst0 * std::max<double>(0.0, double(fCutoff)));
		double fSlow1 = (0.5 * (std::sin(fSlow0) / std::max<double>(0.001, std::pow(10.0, (0.050000000000000003 * double(fQ))))));
		double fSlow2 = (fSlow1 + 1.0);
		double fSlow3 = (0.0010000000000000009 * ((0.0 - (2.0 * std::cos(fSlow0))) / fSlow2));
		double fSlow4 = (0.0010000000000000009 * ((1.0 - fSlow1) / fSlow2));
		double fSlow5 = (0.0010000000000000009 / fSlow2);
		for (int i = 0; (i < count); i = (i + 1)) {
			double fTemp0 = double(input0[i]);
			double fTemp1 = double(input1[i]);
			fRec0[0] = (fSlow3 + (0.999 * fRec0[1]));
			double fTemp2 = (fRec0[0] * fRec1[1]);
			fRec2[0] = (fSlow4 + (0.999 * fRec2[1]));
			fRec1[0] = (fTemp0 - (fTemp2 + (fRec2[0] * fRec1[2])));
			fRec3[0] = (fSlow5 + (0.999 * fRec3[1]));
			output0[i] = FAUSTFLOAT((fTemp2 + (fRec3[0] * (fRec1[0] + fRec1[2]))));
			double fTemp3 = (fRec0[0] * fRec4[1]);
			fRec4[0] = (fTemp1 - (fTemp3 + (fRec2[0] * fRec4[2])));
			output1[i] = FAUSTFLOAT((fTemp3 + (fRec3[0] * (fRec4[0] + fRec4[2]))));
			fRec0[1] = fRec0[0];
			fRec2[1] = fRec2[0];
			fRec1[2] = fRec1[1];
			fRec1[1] = fRec1[0];
			fRec3[1] = fRec3[0];
			fRec4[2] = fRec4[1];
			fRec4[1] = fRec4[0];
		}
	}

};

#endif
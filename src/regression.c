#include "regression.h"

inline double regression_smt (double x1, double x2, double x3, double x4, double x5, double x6, double x7, double x8,
	double x9, double x10, double x11, double x12, double x13, double x14, double x15, double x16) {
LINE_1:
	if ( x5<0.254875 )
		goto LINE_2;
	else if ( x5>=0.254875 )
		goto LINE_3;
	else
		return 1.562;
LINE_2:
	if ( x8<0.00121589 )
		goto LINE_4;
	else if ( x8>=0.00121589 )
		goto LINE_5;
	else
		return 1.22545;
LINE_3:
	if ( x5<0.345509 )
		goto LINE_6;
	else if ( x5>=0.345509 )
		goto LINE_7;
	else
		return 1.70487;
LINE_4:
	if ( x13<0.22285 )
		goto LINE_8;
	else if ( x13>=0.22285 )
		goto LINE_9;
	else
		return 1.35729;
LINE_5:
	if ( x5<0.114461 )
		goto LINE_10;
	else if ( x5>=0.114461 )
		goto LINE_11;
	else
		return 1.03656;
LINE_6:
	if ( x6<0.000187214 )
		goto LINE_12;
	else if ( x6>=0.000187214 )
		goto LINE_13;
	else
		return 1.5671;
LINE_7:
	if ( x5<0.398229 )
		goto LINE_14;
	else if ( x5>=0.398229 )
		goto LINE_15;
	else
		return 1.7659;
LINE_8:
	if ( x7<2.8684e-07 )
		goto LINE_16;
	else if ( x7>=2.8684e-07 )
		goto LINE_17;
	else
		return 1.81829;
LINE_9:
	if ( x15<5.49973e-06 )
		goto LINE_18;
	else if ( x15>=5.49973e-06 )
		goto LINE_19;
	else
		return 1.23202;
LINE_10:
	if ( x14<1.41503e-05 )
		goto LINE_20;
	else if ( x14>=1.41503e-05 )
		goto LINE_21;
	else
		return 1.01703;
LINE_11:
	if ( x13<0.261418 )
		goto LINE_22;
	else if ( x13>=0.261418 )
		goto LINE_23;
	else
		return 1.11468;
LINE_12:
	if ( x7<7.78501e-06 )
		goto LINE_24;
	else if ( x7>=7.78501e-06 )
		goto LINE_25;
	else
		return 1.54715;
LINE_13:
	if ( x13<0.115168 )
		goto LINE_26;
	else if ( x13>=0.115168 )
		goto LINE_27;
	else
		return 1.87775;
LINE_14:
	if ( x6<5.35538e-05 )
		goto LINE_28;
	else if ( x6>=5.35538e-05 )
		goto LINE_29;
	else
		return 1.74156;
LINE_15:
	if ( x13<0.256847 )
		goto LINE_30;
	else if ( x13>=0.256847 )
		goto LINE_31;
	else
		return 1.85432;
LINE_16:
	if ( x15<2.83906e-07 )
		goto LINE_32;
	else if ( x15>=2.83906e-07 )
		goto LINE_33;
	else
		return 1.20082;
LINE_17:
	if ( x8<5.15567e-05 )
		goto LINE_34;
	else if ( x8>=5.15567e-05 )
		goto LINE_35;
	else
		return 1.99927;
LINE_18:
	if ( x7<4.30661e-06 )
		goto LINE_36;
	else if ( x7>=4.30661e-06 )
		goto LINE_37;
	else
		return 1.19814;
LINE_19:
	if ( x6<0.000158406 )
		goto LINE_38;
	else if ( x6>=0.000158406 )
		goto LINE_39;
	else
		return 1.58776;
LINE_20:
	if ( x8<0.00355498 )
		goto LINE_40;
	else if ( x8>=0.00355498 )
		goto LINE_41;
	else
		return 0.996192;
LINE_21:
	if ( x16<0.000121091 )
		goto LINE_42;
	else if ( x16>=0.000121091 )
		goto LINE_43;
	else
		return 1.05139;
LINE_22:
	if ( x16<1.25359e-07 )
		goto LINE_44;
	else if ( x16>=1.25359e-07 )
		goto LINE_45;
	else
		return 1.19818;
LINE_23:
	if ( x5<0.129387 )
		goto LINE_46;
	else if ( x5>=0.129387 )
		goto LINE_47;
	else
		return 1.05205;
LINE_24:
	if ( x5<0.310391 )
		goto LINE_48;
	else if ( x5>=0.310391 )
		goto LINE_49;
	else
		return 1.51356;
LINE_25:
	if ( x13<0.167176 )
		goto LINE_50;
	else if ( x13>=0.167176 )
		goto LINE_51;
	else
		return 1.75223;
LINE_26:
	return 2.63065;
LINE_27:
	if ( x15<5.45093e-08 )
		goto LINE_52;
	else if ( x15>=5.45093e-08 )
		goto LINE_53;
	else
		return 1.65188;
LINE_28:
	if ( x5<0.368493 )
		goto LINE_54;
	else if ( x5>=0.368493 )
		goto LINE_55;
	else
		return 1.7208;
LINE_29:
	if ( x13<0.23722 )
		goto LINE_56;
	else if ( x13>=0.23722 )
		goto LINE_57;
	else
		return 1.91391;
LINE_30:
	if ( x15<4.30958e-07 )
		goto LINE_58;
	else if ( x15>=4.30958e-07 )
		goto LINE_59;
	else
		return 1.90057;
LINE_31:
	if ( x5<0.403856 )
		goto LINE_60;
	else if ( x5>=0.403856 )
		goto LINE_61;
	else
		return 1.83359;
LINE_32:
	return 2.16866;
LINE_33:
	if ( x14<1.14403e-05 )
		goto LINE_62;
	else if ( x14>=1.14403e-05 )
		goto LINE_63;
	else
		return 1.14033;
LINE_34:
	if ( x13<0.0909946 )
		goto LINE_64;
	else if ( x13>=0.0909946 )
		goto LINE_65;
	else
		return 2.17319;
LINE_35:
	if ( x7<2.04008e-06 )
		goto LINE_66;
	else if ( x7>=2.04008e-06 )
		goto LINE_67;
	else
		return 1.57981;
LINE_36:
	if ( x5<0.0881179 )
		goto LINE_68;
	else if ( x5>=0.0881179 )
		goto LINE_69;
	else
		return 1.31952;
LINE_37:
	if ( x14<0.00010339 )
		goto LINE_70;
	else if ( x14>=0.00010339 )
		goto LINE_71;
	else
		return 1.11284;
LINE_38:
	if ( x16<0.000121072 )
		goto LINE_72;
	else if ( x16>=0.000121072 )
		goto LINE_73;
	else
		return 1.49149;
LINE_39:
	return 1.87658;
LINE_40:
	if ( x16<9.48343e-10 )
		goto LINE_74;
	else if ( x16>=9.48343e-10 )
		goto LINE_75;
	else
		return 0.973748;
LINE_41:
	if ( x6<5.44261e-06 )
		goto LINE_76;
	else if ( x6>=5.44261e-06 )
		goto LINE_77;
	else
		return 1.01343;
LINE_42:
	if ( x15<8.29135e-06 )
		goto LINE_78;
	else if ( x15>=8.29135e-06 )
		goto LINE_79;
	else
		return 1.08148;
LINE_43:
	if ( x7<2.3547e-05 )
		goto LINE_80;
	else if ( x7>=2.3547e-05 )
		goto LINE_81;
	else
		return 1.02846;
LINE_44:
	return 1.30712;
LINE_45:
	if ( x6<1.11161e-05 )
		goto LINE_82;
	else if ( x6>=1.11161e-05 )
		goto LINE_83;
	else
		return 1.1546;
LINE_46:
	return 0.938988;
LINE_47:
	if ( x5<0.19501 )
		goto LINE_84;
	else if ( x5>=0.19501 )
		goto LINE_85;
	else
		return 1.06562;
LINE_48:
	if ( x14<4.94283e-06 )
		goto LINE_86;
	else if ( x14>=4.94283e-06 )
		goto LINE_87;
	else
		return 1.41558;
LINE_49:
	if ( x13<0.204705 )
		goto LINE_88;
	else if ( x13>=0.204705 )
		goto LINE_89;
	else
		return 1.57417;
LINE_50:
	if ( x6<2.45041e-05 )
		goto LINE_90;
	else if ( x6>=2.45041e-05 )
		goto LINE_91;
	else
		return 2.2908;
LINE_51:
	if ( x13<0.290494 )
		goto LINE_92;
	else if ( x13>=0.290494 )
		goto LINE_93;
	else
		return 1.59311;
LINE_52:
	return 1.35052;
LINE_53:
	if ( x8<4.33574e-09 )
		goto LINE_94;
	else if ( x8>=4.33574e-09 )
		goto LINE_95;
	else
		return 1.72722;
LINE_54:
	if ( x7<2.23784e-05 )
		goto LINE_96;
	else if ( x7>=2.23784e-05 )
		goto LINE_97;
	else
		return 1.66264;
LINE_55:
	if ( x6<1.63688e-06 )
		goto LINE_98;
	else if ( x6>=1.63688e-06 )
		goto LINE_99;
	else
		return 1.76292;
LINE_56:
	if ( x7<1.15194e-05 )
		goto LINE_100;
	else if ( x7>=1.15194e-05 )
		goto LINE_101;
	else
		return 2.21054;
LINE_57:
	if ( x15<3.56518e-08 )
		goto LINE_102;
	else if ( x15>=3.56518e-08 )
		goto LINE_103;
	else
		return 1.7516;
LINE_58:
	if ( x5<0.41381 )
		goto LINE_104;
	else if ( x5>=0.41381 )
		goto LINE_105;
	else
		return 1.99049;
LINE_59:
	if ( x13<0.0987528 )
		goto LINE_106;
	else if ( x13>=0.0987528 )
		goto LINE_107;
	else
		return 1.87359;
LINE_60:
	if ( x14<4.99691e-06 )
		goto LINE_108;
	else if ( x14>=4.99691e-06 )
		goto LINE_109;
	else
		return 1.78001;
LINE_61:
	if ( x8<4.60592e-09 )
		goto LINE_110;
	else if ( x8>=4.60592e-09 )
		goto LINE_111;
	else
		return 1.84938;
LINE_62:
	return 1.23078;
LINE_63:
	if ( x7<1.18102e-07 )
		goto LINE_112;
	else if ( x7>=1.18102e-07 )
		goto LINE_113;
	else
		return 1.11945;
LINE_64:
	if ( x7<2.28407e-05 )
		goto LINE_114;
	else if ( x7>=2.28407e-05 )
		goto LINE_115;
	else
		return 2.56336;
LINE_65:
	if ( x15<9.848e-06 )
		goto LINE_116;
	else if ( x15>=9.848e-06 )
		goto LINE_117;
	else
		return 1.97088;
LINE_66:
	return 1.20284;
LINE_67:
	if ( x8<0.000924179 )
		goto LINE_118;
	else if ( x8>=0.000924179 )
		goto LINE_119;
	else
		return 1.66059;
LINE_68:
	return 1.80611;
LINE_69:
	if ( x13<0.367868 )
		goto LINE_120;
	else if ( x13>=0.367868 )
		goto LINE_121;
	else
		return 1.29494;
LINE_70:
	if ( x5<0.174618 )
		goto LINE_122;
	else if ( x5>=0.174618 )
		goto LINE_123;
	else
		return 1.08541;
LINE_71:
	if ( x16<6.63778e-09 )
		goto LINE_124;
	else if ( x16>=6.63778e-09 )
		goto LINE_125;
	else
		return 1.35607;
LINE_72:
	if ( x13<0.279371 )
		goto LINE_126;
	else if ( x13>=0.279371 )
		goto LINE_127;
	else
		return 1.52163;
LINE_73:
	return 0.97922;
LINE_74:
	return 0.865737;
LINE_75:
	if ( x5<0.0476101 )
		goto LINE_128;
	else if ( x5>=0.0476101 )
		goto LINE_129;
	else
		return 0.977983;
LINE_76:
	return 0.928387;
LINE_77:
	if ( x13<0.12557 )
		goto LINE_130;
	else if ( x13>=0.12557 )
		goto LINE_131;
	else
		return 1.0173;
LINE_78:
	if ( x15<2.7106e-07 )
		goto LINE_132;
	else if ( x15>=2.7106e-07 )
		goto LINE_133;
	else
		return 1.03522;
LINE_79:
	if ( x13<0.310125 )
		goto LINE_134;
	else if ( x13>=0.310125 )
		goto LINE_135;
	else
		return 1.14908;
LINE_80:
	if ( x16<0.0003731 )
		goto LINE_136;
	else if ( x16>=0.0003731 )
		goto LINE_137;
	else
		return 1.03241;
LINE_81:
	return 0.866497;
LINE_82:
	return 1.21192;
LINE_83:
	if ( x5<0.146643 )
		goto LINE_138;
	else if ( x5>=0.146643 )
		goto LINE_139;
	else
		return 1.12594;
LINE_84:
	if ( x5<0.170486 )
		goto LINE_140;
	else if ( x5>=0.170486 )
		goto LINE_141;
	else
		return 1.06059;
LINE_85:
	return 1.18635;
LINE_86:
	if ( x13<0.349784 )
		goto LINE_142;
	else if ( x13>=0.349784 )
		goto LINE_143;
	else
		return 1.47767;
LINE_87:
	if ( x15<3.85747e-05 )
		goto LINE_144;
	else if ( x15>=3.85747e-05 )
		goto LINE_145;
	else
		return 1.29816;
LINE_88:
	if ( x14<3.3388e-06 )
		goto LINE_146;
	else if ( x14>=3.3388e-06 )
		goto LINE_147;
	else
		return 1.454;
LINE_89:
	if ( x13<0.351855 )
		goto LINE_148;
	else if ( x13>=0.351855 )
		goto LINE_149;
	else
		return 1.61448;
LINE_90:
	return 3.06951;
LINE_91:
	if ( x8<4.40495e-05 )
		goto LINE_150;
	else if ( x8>=4.40495e-05 )
		goto LINE_151;
	else
		return 2.2259;
LINE_92:
	if ( x13<0.192759 )
		goto LINE_152;
	else if ( x13>=0.192759 )
		goto LINE_153;
	else
		return 1.78533;
LINE_93:
	if ( x5<0.309262 )
		goto LINE_154;
	else if ( x5>=0.309262 )
		goto LINE_155;
	else
		return 1.53657;
LINE_94:
	return 1.91753;
LINE_95:
	if ( x8<2.37089e-08 )
		goto LINE_156;
	else if ( x8>=2.37089e-08 )
		goto LINE_157;
	else
		return 1.61303;
LINE_96:
	if ( x13<0.169785 )
		goto LINE_158;
	else if ( x13>=0.169785 )
		goto LINE_159;
	else
		return 1.6576;
LINE_97:
	return 2.13828;
LINE_98:
	if ( x15<7.70505e-08 )
		goto LINE_160;
	else if ( x15>=7.70505e-08 )
		goto LINE_161;
	else
		return 1.7101;
LINE_99:
	if ( x16<0.00301629 )
		goto LINE_162;
	else if ( x16>=0.00301629 )
		goto LINE_163;
	else
		return 1.77201;
LINE_100:
	if ( x13<0.221069 )
		goto LINE_164;
	else if ( x13>=0.221069 )
		goto LINE_165;
	else
		return 2.17898;
LINE_101:
	return 3.09408;
LINE_102:
	return 1.35221;
LINE_103:
	if ( x13<0.366223 )
		goto LINE_166;
	else if ( x13>=0.366223 )
		goto LINE_167;
	else
		return 1.76726;
LINE_104:
	if ( x13<0.223195 )
		goto LINE_168;
	else if ( x13>=0.223195 )
		goto LINE_169;
	else
		return 1.94721;
LINE_105:
	return 2.16358;
LINE_106:
	return 1.95046;
LINE_107:
	if ( x13<0.205962 )
		goto LINE_170;
	else if ( x13>=0.205962 )
		goto LINE_171;
	else
		return 1.85672;
LINE_108:
	if ( x7<4.3762e-08 )
		goto LINE_172;
	else if ( x7>=4.3762e-08 )
		goto LINE_173;
	else
		return 1.76024;
LINE_109:
	if ( x13<0.367919 )
		goto LINE_174;
	else if ( x13>=0.367919 )
		goto LINE_175;
	else
		return 1.82548;
LINE_110:
	if ( x5<0.417672 )
		goto LINE_176;
	else if ( x5>=0.417672 )
		goto LINE_177;
	else
		return 1.89771;
LINE_111:
	if ( x14<1.66394e-06 )
		goto LINE_178;
	else if ( x14>=1.66394e-06 )
		goto LINE_179;
	else
		return 1.83823;
LINE_112:
	return 1.14475;
LINE_113:
	return 1.07897;
LINE_114:
	return 2.72433;
LINE_115:
	return 2.27362;
LINE_116:
	return 1.57204;
LINE_117:
	if ( x5<0.123062 )
		goto LINE_180;
	else if ( x5>=0.123062 )
		goto LINE_181;
	else
		return 2.08483;
LINE_118:
	if ( x13<0.125451 )
		goto LINE_182;
	else if ( x13>=0.125451 )
		goto LINE_183;
	else
		return 1.61059;
LINE_119:
	return 1.84392;
LINE_120:
	if ( x5<0.24878 )
		goto LINE_184;
	else if ( x5>=0.24878 )
		goto LINE_185;
	else
		return 1.372;
LINE_121:
	if ( x6<0.000160401 )
		goto LINE_186;
	else if ( x6>=0.000160401 )
		goto LINE_187;
	else
		return 1.22242;
LINE_122:
	if ( x5<0.16018 )
		goto LINE_188;
	else if ( x5>=0.16018 )
		goto LINE_189;
	else
		return 1.04182;
LINE_123:
	if ( x13<0.328263 )
		goto LINE_190;
	else if ( x13>=0.328263 )
		goto LINE_191;
	else
		return 1.17983;
LINE_124:
	return 1.46255;
LINE_125:
	return 1.28508;
LINE_126:
	return 1.64539;
LINE_127:
	if ( x8<8.11619e-08 )
		goto LINE_192;
	else if ( x8>=8.11619e-08 )
		goto LINE_193;
	else
		return 1.43499;
LINE_128:
	return 0.866022;
LINE_129:
	if ( x15<4.77237e-06 )
		goto LINE_194;
	else if ( x15>=4.77237e-06 )
		goto LINE_195;
	else
		return 0.982553;
LINE_130:
	return 1.04254;
LINE_131:
	if ( x16<0.0029713 )
		goto LINE_196;
	else if ( x16>=0.0029713 )
		goto LINE_197;
	else
		return 1.0143;
LINE_132:
	return 1.0102;
LINE_133:
	if ( x16<4.68958e-08 )
		goto LINE_198;
	else if ( x16>=4.68958e-08 )
		goto LINE_199;
	else
		return 1.04677;
LINE_134:
	if ( x16<4.405e-05 )
		goto LINE_200;
	else if ( x16>=4.405e-05 )
		goto LINE_201;
	else
		return 1.16899;
LINE_135:
	return 1.08271;
LINE_136:
	return 0.937707;
LINE_137:
	if ( x15<2.18813e-05 )
		goto LINE_202;
	else if ( x15>=2.18813e-05 )
		goto LINE_203;
	else
		return 1.03989;
LINE_138:
	return 1.14673;
LINE_139:
	return 1.04277;
LINE_140:
	if ( x14<0.000450327 )
		goto LINE_204;
	else if ( x14>=0.000450327 )
		goto LINE_205;
	else
		return 1.05097;
LINE_141:
	return 1.08945;
LINE_142:
	if ( x13<0.219549 )
		goto LINE_206;
	else if ( x13>=0.219549 )
		goto LINE_207;
	else
		return 1.59154;
LINE_143:
	if ( x14<1.53223e-06 )
		goto LINE_208;
	else if ( x14>=1.53223e-06 )
		goto LINE_209;
	else
		return 1.38937;
LINE_144:
	if ( x5<0.308924 )
		goto LINE_210;
	else if ( x5>=0.308924 )
		goto LINE_211;
	else
		return 1.27892;
LINE_145:
	return 2.16371;
LINE_146:
	return 1.99941;
LINE_147:
	if ( x16<9.48586e-10 )
		goto LINE_212;
	else if ( x16>=9.48586e-10 )
		goto LINE_213;
	else
		return 1.43302;
LINE_148:
	if ( x15<7.51579e-08 )
		goto LINE_214;
	else if ( x15>=7.51579e-08 )
		goto LINE_215;
	else
		return 1.68772;
LINE_149:
	if ( x5<0.324793 )
		goto LINE_216;
	else if ( x5>=0.324793 )
		goto LINE_217;
	else
		return 1.56616;
LINE_150:
	return 2.33311;
LINE_151:
	return 2.01148;
LINE_152:
	return 1.25933;
LINE_153:
	return 1.84377;
LINE_154:
	if ( x15<5.59556e-07 )
		goto LINE_218;
	else if ( x15>=5.59556e-07 )
		goto LINE_219;
	else
		return 1.44265;
LINE_155:
	if ( x15<3.70126e-07 )
		goto LINE_220;
	else if ( x15>=3.70126e-07 )
		goto LINE_221;
	else
		return 1.64224;
LINE_156:
	return 1.44607;
LINE_157:
	return 1.68459;
LINE_158:
	if ( x5<0.358535 )
		goto LINE_222;
	else if ( x5>=0.358535 )
		goto LINE_223;
	else
		return 1.57048;
LINE_159:
	if ( x15<2.74968e-08 )
		goto LINE_224;
	else if ( x15>=2.74968e-08 )
		goto LINE_225;
	else
		return 1.67494;
LINE_160:
	if ( x13<0.307579 )
		goto LINE_226;
	else if ( x13>=0.307579 )
		goto LINE_227;
	else
		return 1.78665;
LINE_161:
	if ( x7<3.53554e-08 )
		goto LINE_228;
	else if ( x7>=3.53554e-08 )
		goto LINE_229;
	else
		return 1.67565;
LINE_162:
	if ( x5<0.373402 )
		goto LINE_230;
	else if ( x5>=0.373402 )
		goto LINE_231;
	else
		return 1.76234;
LINE_163:
	if ( x5<0.392577 )
		goto LINE_232;
	else if ( x5>=0.392577 )
		goto LINE_233;
	else
		return 1.83167;
LINE_164:
	if ( x15<2.52273e-05 )
		goto LINE_234;
	else if ( x15>=2.52273e-05 )
		goto LINE_235;
	else
		return 2.20974;
LINE_165:
	return 1.99444;
LINE_166:
	if ( x16<2.70933e-09 )
		goto LINE_236;
	else if ( x16>=2.70933e-09 )
		goto LINE_237;
	else
		return 1.82142;
LINE_167:
	if ( x14<1.60718e-06 )
		goto LINE_238;
	else if ( x14>=1.60718e-06 )
		goto LINE_239;
	else
		return 1.68989;
LINE_168:
	return 2.04854;
LINE_169:
	return 1.87483;
LINE_170:
	if ( x8<4.74419e-09 )
		goto LINE_240;
	else if ( x8>=4.74419e-09 )
		goto LINE_241;
	else
		return 1.84075;
LINE_171:
	return 1.92259;
LINE_172:
	return 1.68938;
LINE_173:
	if ( x14<1.81875e-06 )
		goto LINE_242;
	else if ( x14>=1.81875e-06 )
		goto LINE_243;
	else
		return 1.77515;
LINE_174:
	return 1.80761;
LINE_175:
	return 1.89695;
LINE_176:
	if ( x15<7.84287e-08 )
		goto LINE_244;
	else if ( x15>=7.84287e-08 )
		goto LINE_245;
	else
		return 1.88376;
LINE_177:
	return 1.95702;
LINE_178:
	if ( x13<0.294376 )
		goto LINE_246;
	else if ( x13>=0.294376 )
		goto LINE_247;
	else
		return 1.8026;
LINE_179:
	if ( x15<4.44545e-08 )
		goto LINE_248;
	else if ( x15>=4.44545e-08 )
		goto LINE_249;
	else
		return 1.85173;
LINE_180:
	return 1.78001;
LINE_181:
	if ( x7<4.81462e-05 )
		goto LINE_250;
	else if ( x7>=4.81462e-05 )
		goto LINE_251;
	else
		return 2.18009;
LINE_182:
	return 1.66247;
LINE_183:
	return 1.54833;
LINE_184:
	if ( x13<0.265367 )
		goto LINE_252;
	else if ( x13>=0.265367 )
		goto LINE_253;
	else
		return 1.32939;
LINE_185:
	if ( x16<3.84694e-08 )
		goto LINE_254;
	else if ( x16>=3.84694e-08 )
		goto LINE_255;
	else
		return 1.53392;
LINE_186:
	if ( x16<3.65895e-09 )
		goto LINE_256;
	else if ( x16>=3.65895e-09 )
		goto LINE_257;
	else
		return 1.25969;
LINE_187:
	if ( x5<0.200806 )
		goto LINE_258;
	else if ( x5>=0.200806 )
		goto LINE_259;
	else
		return 1.12394;
LINE_188:
	if ( x13<0.422879 )
		goto LINE_260;
	else if ( x13>=0.422879 )
		goto LINE_261;
	else
		return 1.03719;
LINE_189:
	if ( x13<0.345204 )
		goto LINE_262;
	else if ( x13>=0.345204 )
		goto LINE_263;
	else
		return 1.0755;
LINE_190:
	return 1.34644;
LINE_191:
	if ( x14<4.10355e-05 )
		goto LINE_264;
	else if ( x14>=4.10355e-05 )
		goto LINE_265;
	else
		return 1.16702;
LINE_192:
	return 1.48924;
LINE_193:
	return 1.3084;
LINE_194:
	if ( x7<1.995e-05 )
		goto LINE_266;
	else if ( x7>=1.995e-05 )
		goto LINE_267;
	else
		return 0.988871;
LINE_195:
	return 0.926956;
LINE_196:
	if ( x16<0.00147108 )
		goto LINE_268;
	else if ( x16>=0.00147108 )
		goto LINE_269;
	else
		return 1.01633;
LINE_197:
	return 0.896906;
LINE_198:
	if ( x13<0.228961 )
		goto LINE_270;
	else if ( x13>=0.228961 )
		goto LINE_271;
	else
		return 1.05088;
LINE_199:
	return 1.02419;
LINE_200:
	return 1.17552;
LINE_201:
	return 1.11028;
LINE_202:
	if ( x14<4.66298e-05 )
		goto LINE_272;
	else if ( x14>=4.66298e-05 )
		goto LINE_273;
	else
		return 1.03429;
LINE_203:
	return 1.14061;
LINE_204:
	if ( x7<1.0457e-05 )
		goto LINE_274;
	else if ( x7>=1.0457e-05 )
		goto LINE_275;
	else
		return 1.0473;
LINE_205:
	return 1.11341;
LINE_206:
	return 2.101;
LINE_207:
	if ( x14<1.54612e-06 )
		goto LINE_276;
	else if ( x14>=1.54612e-06 )
		goto LINE_277;
	else
		return 1.56324;
LINE_208:
	return 1.57865;
LINE_209:
	if ( x5<0.295726 )
		goto LINE_278;
	else if ( x5>=0.295726 )
		goto LINE_279;
	else
		return 1.38131;
LINE_210:
	if ( x15<1.64706e-05 )
		goto LINE_280;
	else if ( x15>=1.64706e-05 )
		goto LINE_281;
	else
		return 1.29015;
LINE_211:
	return 0.784851;
LINE_212:
	return 2.01062;
LINE_213:
	if ( x5<0.339505 )
		goto LINE_282;
	else if ( x5>=0.339505 )
		goto LINE_283;
	else
		return 1.42169;
LINE_214:
	if ( x13<0.254627 )
		goto LINE_284;
	else if ( x13>=0.254627 )
		goto LINE_285;
	else
		return 1.75728;
LINE_215:
	if ( x5<0.317781 )
		goto LINE_286;
	else if ( x5>=0.317781 )
		goto LINE_287;
	else
		return 1.62238;
LINE_216:
	if ( x14<1.63497e-06 )
		goto LINE_288;
	else if ( x14>=1.63497e-06 )
		goto LINE_289;
	else
		return 1.66024;
LINE_217:
	if ( x5<0.328322 )
		goto LINE_290;
	else if ( x5>=0.328322 )
		goto LINE_291;
	else
		return 1.55029;
LINE_218:
	if ( x5<0.291161 )
		goto LINE_292;
	else if ( x5>=0.291161 )
		goto LINE_293;
	else
		return 1.41314;
LINE_219:
	return 1.54595;
LINE_220:
	if ( x6<2.64414e-05 )
		goto LINE_294;
	else if ( x6>=2.64414e-05 )
		goto LINE_295;
	else
		return 1.63239;
LINE_221:
	return 1.79;
LINE_222:
	if ( x16<0.00247923 )
		goto LINE_296;
	else if ( x16>=0.00247923 )
		goto LINE_297;
	else
		return 1.49109;
LINE_223:
	if ( x16<0.00313889 )
		goto LINE_298;
	else if ( x16>=0.00313889 )
		goto LINE_299;
	else
		return 1.69839;
LINE_224:
	return 1.28119;
LINE_225:
	if ( x7<2.04373e-08 )
		goto LINE_300;
	else if ( x7>=2.04373e-08 )
		goto LINE_301;
	else
		return 1.67831;
LINE_226:
	return 1.99518;
LINE_227:
	if ( x7<7.0349e-08 )
		goto LINE_302;
	else if ( x7>=7.0349e-08 )
		goto LINE_303;
	else
		return 1.74495;
LINE_228:
	return 1.7745;
LINE_229:
	if ( x13<0.35458 )
		goto LINE_304;
	else if ( x13>=0.35458 )
		goto LINE_305;
	else
		return 1.65821;
LINE_230:
	if ( x6<1.74698e-06 )
		goto LINE_306;
	else if ( x6>=1.74698e-06 )
		goto LINE_307;
	else
		return 1.71071;
LINE_231:
	if ( x14<1.46892e-06 )
		goto LINE_308;
	else if ( x14>=1.46892e-06 )
		goto LINE_309;
	else
		return 1.77158;
LINE_232:
	if ( x6<1.68088e-06 )
		goto LINE_310;
	else if ( x6>=1.68088e-06 )
		goto LINE_311;
	else
		return 1.80909;
LINE_233:
	if ( x8<2.30337e-09 )
		goto LINE_312;
	else if ( x8>=2.30337e-09 )
		goto LINE_313;
	else
		return 1.9152;
LINE_234:
	if ( x16<0.00360604 )
		goto LINE_314;
	else if ( x16>=0.00360604 )
		goto LINE_315;
	else
		return 2.24598;
LINE_235:
	return 2.10102;
LINE_236:
	return 2.0403;
LINE_237:
	if ( x6<0.000849622 )
		goto LINE_316;
	else if ( x6>=0.000849622 )
		goto LINE_317;
	else
		return 1.80578;
LINE_238:
	return 1.44063;
LINE_239:
	if ( x6<0.0005079 )
		goto LINE_318;
	else if ( x6>=0.0005079 )
		goto LINE_319;
	else
		return 1.71613;
LINE_240:
	return 1.8892;
LINE_241:
	if ( x14<1.44186e-05 )
		goto LINE_320;
	else if ( x14>=1.44186e-05 )
		goto LINE_321;
	else
		return 1.8321;
LINE_242:
	if ( x13<0.331733 )
		goto LINE_322;
	else if ( x13>=0.331733 )
		goto LINE_323;
	else
		return 1.81221;
LINE_243:
	return 1.73397;
LINE_244:
	return 1.86324;
LINE_245:
	return 1.90684;
LINE_246:
	return 1.89242;
LINE_247:
	if ( x13<0.333018 )
		goto LINE_324;
	else if ( x13>=0.333018 )
		goto LINE_325;
	else
		return 1.79035;
LINE_248:
	return 1.77112;
LINE_249:
	if ( x15<8.31941e-08 )
		goto LINE_326;
	else if ( x15>=8.31941e-08 )
		goto LINE_327;
	else
		return 1.85693;
LINE_250:
	if ( x8<1.99175e-08 )
		goto LINE_328;
	else if ( x8>=1.99175e-08 )
		goto LINE_329;
	else
		return 2.20783;
LINE_251:
	return 1.76391;
LINE_252:
	return 1.58064;
LINE_253:
	if ( x6<0.000271725 )
		goto LINE_330;
	else if ( x6>=0.000271725 )
		goto LINE_331;
	else
		return 1.28228;
LINE_254:
	return 1.66944;
LINE_255:
	return 1.39839;
LINE_256:
	return 1.44911;
LINE_257:
	if ( x5<0.246862 )
		goto LINE_332;
	else if ( x5>=0.246862 )
		goto LINE_333;
	else
		return 1.24297;
LINE_258:
	return 1.05196;
LINE_259:
	return 1.17792;
LINE_260:
	if ( x13<0.39481 )
		goto LINE_334;
	else if ( x13>=0.39481 )
		goto LINE_335;
	else
		return 1.03599;
LINE_261:
	return 1.13262;
LINE_262:
	return 1.02255;
LINE_263:
	return 1.10575;
LINE_264:
	if ( x5<0.232607 )
		goto LINE_336;
	else if ( x5>=0.232607 )
		goto LINE_337;
	else
		return 1.16098;
LINE_265:
	return 1.39657;
LINE_266:
	if ( x14<1.74261e-06 )
		goto LINE_338;
	else if ( x14>=1.74261e-06 )
		goto LINE_339;
	else
		return 0.991747;
LINE_267:
	return 0.8652;
LINE_268:
	if ( x5<0.0741164 )
		goto LINE_340;
	else if ( x5>=0.0741164 )
		goto LINE_341;
	else
		return 1.01552;
LINE_269:
	return 1.06233;
LINE_270:
	return 1.06152;
LINE_271:
	return 1.04201;
LINE_272:
	if ( x16<0.000952252 )
		goto LINE_342;
	else if ( x16>=0.000952252 )
		goto LINE_343;
	else
		return 1.0435;
LINE_273:
	return 0.988259;
LINE_274:
	return 1.00222;
LINE_275:
	if ( x5<0.13815 )
		goto LINE_344;
	else if ( x5>=0.13815 )
		goto LINE_345;
	else
		return 1.05012;
LINE_276:
	return 1.7019;
LINE_277:
	if ( x6<1.44543e-06 )
		goto LINE_346;
	else if ( x6>=1.44543e-06 )
		goto LINE_347;
	else
		return 1.52362;
LINE_278:
	if ( x7<5.70169e-08 )
		goto LINE_348;
	else if ( x7>=5.70169e-08 )
		goto LINE_349;
	else
		return 1.32889;
LINE_279:
	if ( x5<0.302121 )
		goto LINE_350;
	else if ( x5>=0.302121 )
		goto LINE_351;
	else
		return 1.41385;
LINE_280:
	if ( x13<0.210175 )
		goto LINE_352;
	else if ( x13>=0.210175 )
		goto LINE_353;
	else
		return 1.33724;
LINE_281:
	if ( x6<1.9207e-06 )
		goto LINE_354;
	else if ( x6>=1.9207e-06 )
		goto LINE_355;
	else
		return 1.16459;
LINE_282:
	if ( x15<9.09138e-06 )
		goto LINE_356;
	else if ( x15>=9.09138e-06 )
		goto LINE_357;
	else
		return 1.3524;
LINE_283:
	if ( x16<0.00185747 )
		goto LINE_358;
	else if ( x16>=0.00185747 )
		goto LINE_359;
	else
		return 1.4664;
LINE_284:
	return 2.13617;
LINE_285:
	if ( x16<1.61157e-08 )
		goto LINE_360;
	else if ( x16>=1.61157e-08 )
		goto LINE_361;
	else
		return 1.71668;
LINE_286:
	return 2.06586;
LINE_287:
	if ( x14<1.99998e-06 )
		goto LINE_362;
	else if ( x14>=1.99998e-06 )
		goto LINE_363;
	else
		return 1.60852;
LINE_288:
	return 1.47207;
LINE_289:
	if ( x8<2.71161e-09 )
		goto LINE_364;
	else if ( x8>=2.71161e-09 )
		goto LINE_365;
	else
		return 1.67471;
LINE_290:
	return 1.42527;
LINE_291:
	if ( x16<1.61173e-08 )
		goto LINE_366;
	else if ( x16>=1.61173e-08 )
		goto LINE_367;
	else
		return 1.5583;
LINE_292:
	return 1.36585;
LINE_293:
	return 1.47619;
LINE_294:
	return 1.66436;
LINE_295:
	return 1.61107;
LINE_296:
	if ( x13<0.115451 )
		goto LINE_368;
	else if ( x13>=0.115451 )
		goto LINE_369;
	else
		return 1.36569;
LINE_297:
	if ( x13<0.0909092 )
		goto LINE_370;
	else if ( x13>=0.0909092 )
		goto LINE_371;
	else
		return 1.55708;
LINE_298:
	return 1.60414;
LINE_299:
	if ( x6<2.02502e-05 )
		goto LINE_372;
	else if ( x6>=2.02502e-05 )
		goto LINE_373;
	else
		return 1.7738;
LINE_300:
	return 1.99512;
LINE_301:
	if ( x7<7.14315e-08 )
		goto LINE_374;
	else if ( x7>=7.14315e-08 )
		goto LINE_375;
	else
		return 1.67558;
LINE_302:
	return 1.78085;
LINE_303:
	return 1.69109;
LINE_304:
	if ( x15<9.51423e-08 )
		goto LINE_376;
	else if ( x15>=9.51423e-08 )
		goto LINE_377;
	else
		return 1.62125;
LINE_305:
	if ( x8<8.67222e-09 )
		goto LINE_378;
	else if ( x8>=8.67222e-09 )
		goto LINE_379;
	else
		return 1.73549;
LINE_306:
	return 1.4822;
LINE_307:
	if ( x16<1.59528e-07 )
		goto LINE_380;
	else if ( x16>=1.59528e-07 )
		goto LINE_381;
	else
		return 1.72159;
LINE_308:
	if ( x5<0.376082 )
		goto LINE_382;
	else if ( x5>=0.376082 )
		goto LINE_383;
	else
		return 1.85574;
LINE_309:
	if ( x8<2.03564e-07 )
		goto LINE_384;
	else if ( x8>=2.03564e-07 )
		goto LINE_385;
	else
		return 1.76533;
LINE_310:
	return 1.94012;
LINE_311:
	if ( x6<1.91092e-06 )
		goto LINE_386;
	else if ( x6>=1.91092e-06 )
		goto LINE_387;
	else
		return 1.8016;
LINE_312:
	return 1.98295;
LINE_313:
	return 1.89827;
LINE_314:
	if ( x5<0.356005 )
		goto LINE_388;
	else if ( x5>=0.356005 )
		goto LINE_389;
	else
		return 2.29549;
LINE_315:
	return 2.11727;
LINE_316:
	if ( x15<5.0857e-08 )
		goto LINE_390;
	else if ( x15>=5.0857e-08 )
		goto LINE_391;
	else
		return 1.79475;
LINE_317:
	return 2.10375;
LINE_318:
	return 1.75979;
LINE_319:
	if ( x16<1.2563e-07 )
		goto LINE_392;
	else if ( x16>=1.2563e-07 )
		goto LINE_393;
	else
		return 1.69066;
LINE_320:
	return 1.86317;
LINE_321:
	if ( x16<5.01427e-09 )
		goto LINE_394;
	else if ( x16>=5.01427e-09 )
		goto LINE_395;
	else
		return 1.82534;
LINE_322:
	return 1.777;
LINE_323:
	return 1.83569;
LINE_324:
	return 1.71478;
LINE_325:
	if ( x7<1.51549e-07 )
		goto LINE_396;
	else if ( x7>=1.51549e-07 )
		goto LINE_397;
	else
		return 1.80714;
LINE_326:
	if ( x16<2.9804e-09 )
		goto LINE_398;
	else if ( x16>=2.9804e-09 )
		goto LINE_399;
	else
		return 1.8815;
LINE_327:
	if ( x13<0.287747 )
		goto LINE_400;
	else if ( x13>=0.287747 )
		goto LINE_401;
	else
		return 1.84243;
LINE_328:
	return 2.06745;
LINE_329:
	return 2.33067;
LINE_330:
	if ( x13<0.366643 )
		goto LINE_402;
	else if ( x13>=0.366643 )
		goto LINE_403;
	else
		return 1.26049;
LINE_331:
	return 1.60908;
LINE_332:
	if ( x7<3.5073e-07 )
		goto LINE_404;
	else if ( x7>=3.5073e-07 )
		goto LINE_405;
	else
		return 1.20739;
LINE_333:
	if ( x16<1.57272e-07 )
		goto LINE_406;
	else if ( x16>=1.57272e-07 )
		goto LINE_407;
	else
		return 1.28301;
LINE_334:
	if ( x15<1.66074e-07 )
		goto LINE_408;
	else if ( x15>=1.66074e-07 )
		goto LINE_409;
	else
		return 1.03228;
LINE_335:
	if ( x6<9.49691e-05 )
		goto LINE_410;
	else if ( x6>=9.49691e-05 )
		goto LINE_411;
	else
		return 1.04768;
LINE_336:
	if ( x7<5.31014e-05 )
		goto LINE_412;
	else if ( x7>=5.31014e-05 )
		goto LINE_413;
	else
		return 1.15722;
LINE_337:
	return 1.22865;
LINE_338:
	if ( x14<1.70265e-06 )
		goto LINE_414;
	else if ( x14>=1.70265e-06 )
		goto LINE_415;
	else
		return 0.968645;
LINE_339:
	if ( x16<2.62414e-07 )
		goto LINE_416;
	else if ( x16>=2.62414e-07 )
		goto LINE_417;
	else
		return 1.01184;
LINE_340:
	if ( x7<5.26299e-07 )
		goto LINE_418;
	else if ( x7>=5.26299e-07 )
		goto LINE_419;
	else
		return 1.01242;
LINE_341:
	if ( x14<2.55261e-06 )
		goto LINE_420;
	else if ( x14>=2.55261e-06 )
		goto LINE_421;
	else
		return 1.02421;
LINE_342:
	if ( x7<1.57861e-05 )
		goto LINE_422;
	else if ( x7>=1.57861e-05 )
		goto LINE_423;
	else
		return 1.02371;
LINE_343:
	if ( x5<0.0530431 )
		goto LINE_424;
	else if ( x5>=0.0530431 )
		goto LINE_425;
	else
		return 1.06938;
LINE_344:
	return 1.04525;
LINE_345:
	return 1.05498;
LINE_346:
	return 1.69004;
LINE_347:
	if ( x8<1.44926e-08 )
		goto LINE_426;
	else if ( x8>=1.44926e-08 )
		goto LINE_427;
	else
		return 1.48744;
LINE_348:
	return 1.27286;
LINE_349:
	if ( x15<1.58087e-07 )
		goto LINE_428;
	else if ( x15>=1.58087e-07 )
		goto LINE_429;
	else
		return 1.36455;
LINE_350:
	if ( x5<0.296769 )
		goto LINE_430;
	else if ( x5>=0.296769 )
		goto LINE_431;
	else
		return 1.48592;
LINE_351:
	if ( x8<7.33229e-08 )
		goto LINE_432;
	else if ( x8>=7.33229e-08 )
		goto LINE_433;
	else
		return 1.37591;
LINE_352:
	if ( x5<0.293547 )
		goto LINE_434;
	else if ( x5>=0.293547 )
		goto LINE_435;
	else
		return 1.28316;
LINE_353:
	if ( x16<0.000941833 )
		goto LINE_436;
	else if ( x16>=0.000941833 )
		goto LINE_437;
	else
		return 1.36968;
LINE_354:
	return 1.1876;
LINE_355:
	return 1.13237;
LINE_356:
	return 1.40875;
LINE_357:
	if ( x8<5.00755e-09 )
		goto LINE_438;
	else if ( x8>=5.00755e-09 )
		goto LINE_439;
	else
		return 1.30629;
LINE_358:
	if ( x16<1.26126e-07 )
		goto LINE_440;
	else if ( x16>=1.26126e-07 )
		goto LINE_441;
	else
		return 1.42196;
LINE_359:
	if ( x6<4.14124e-05 )
		goto LINE_442;
	else if ( x6>=4.14124e-05 )
		goto LINE_443;
	else
		return 1.51381;
LINE_360:
	if ( x5<0.341385 )
		goto LINE_444;
	else if ( x5>=0.341385 )
		goto LINE_445;
	else
		return 1.79042;
LINE_361:
	if ( x15<6.29165e-08 )
		goto LINE_446;
	else if ( x15>=6.29165e-08 )
		goto LINE_447;
	else
		return 1.66138;
LINE_362:
	return 1.74153;
LINE_363:
	if ( x16<0.000949255 )
		goto LINE_448;
	else if ( x16>=0.000949255 )
		goto LINE_449;
	else
		return 1.56418;
LINE_364:
	return 1.81264;
LINE_365:
	if ( x8<2.83119e-08 )
		goto LINE_450;
	else if ( x8>=2.83119e-08 )
		goto LINE_451;
	else
		return 1.66322;
LINE_366:
	if ( x5<0.341012 )
		goto LINE_452;
	else if ( x5>=0.341012 )
		goto LINE_453;
	else
		return 1.51701;
LINE_367:
	if ( x16<9.25687e-08 )
		goto LINE_454;
	else if ( x16>=9.25687e-08 )
		goto LINE_455;
	else
		return 1.57778;
LINE_368:
	return 1.29055;
LINE_369:
	return 1.41579;
LINE_370:
	if ( x13<0.0674699 )
		goto LINE_456;
	else if ( x13>=0.0674699 )
		goto LINE_457;
	else
		return 1.50833;
LINE_371:
	return 1.62412;
LINE_372:
	return 1.75036;
LINE_373:
	return 1.86756;
LINE_374:
	if ( x7<5.03401e-08 )
		goto LINE_458;
	else if ( x7>=5.03401e-08 )
		goto LINE_459;
	else
		return 1.64426;
LINE_375:
	if ( x8<1.40891e-08 )
		goto LINE_460;
	else if ( x8>=1.40891e-08 )
		goto LINE_461;
	else
		return 1.70333;
LINE_376:
	return 1.29213;
LINE_377:
	if ( x13<0.157433 )
		goto LINE_462;
	else if ( x13>=0.157433 )
		goto LINE_463;
	else
		return 1.63621;
LINE_378:
	return 1.78157;
LINE_379:
	return 1.71821;
LINE_380:
	if ( x15<4.00614e-08 )
		goto LINE_464;
	else if ( x15>=4.00614e-08 )
		goto LINE_465;
	else
		return 1.70343;
LINE_381:
	if ( x5<0.368589 )
		goto LINE_466;
	else if ( x5>=0.368589 )
		goto LINE_467;
	else
		return 1.76211;
LINE_382:
	return 2.0719;
LINE_383:
	if ( x8<0.000948221 )
		goto LINE_468;
	else if ( x8>=0.000948221 )
		goto LINE_469;
	else
		return 1.78923;
LINE_384:
	if ( x15<1.98865e-06 )
		goto LINE_470;
	else if ( x15>=1.98865e-06 )
		goto LINE_471;
	else
		return 1.75784;
LINE_385:
	if ( x7<8.50232e-08 )
		goto LINE_472;
	else if ( x7>=8.50232e-08 )
		goto LINE_473;
	else
		return 1.79355;
LINE_386:
	if ( x7<8.2755e-08 )
		goto LINE_474;
	else if ( x7>=8.2755e-08 )
		goto LINE_475;
	else
		return 1.75454;
LINE_387:
	if ( x14<6.59438e-06 )
		goto LINE_476;
	else if ( x14>=6.59438e-06 )
		goto LINE_477;
	else
		return 1.83298;
LINE_388:
	return 2.23038;
LINE_389:
	return 2.3513;
LINE_390:
	return 2.07837;
LINE_391:
	if ( x5<0.352693 )
		goto LINE_478;
	else if ( x5>=0.352693 )
		goto LINE_479;
	else
		return 1.78384;
LINE_392:
	return 1.67009;
LINE_393:
	return 1.73181;
LINE_394:
	return 1.8691;
LINE_395:
	if ( x14<0.000189396 )
		goto LINE_480;
	else if ( x14>=0.000189396 )
		goto LINE_481;
	else
		return 1.81878;
LINE_396:
	if ( x14<1.19499e-06 )
		goto LINE_482;
	else if ( x14>=1.19499e-06 )
		goto LINE_483;
	else
		return 1.80034;
LINE_397:
	return 1.92274;
LINE_398:
	return 1.85624;
LINE_399:
	if ( x6<2.63499e-06 )
		goto LINE_484;
	else if ( x6>=2.63499e-06 )
		goto LINE_485;
	else
		return 1.89774;
LINE_400:
	return 1.78656;
LINE_401:
	if ( x8<1.72041e-08 )
		goto LINE_486;
	else if ( x8>=1.72041e-08 )
		goto LINE_487;
	else
		return 1.85065;
LINE_402:
	if ( x6<0.00010435 )
		goto LINE_488;
	else if ( x6>=0.00010435 )
		goto LINE_489;
	else
		return 1.24444;
LINE_403:
	return 1.72598;
LINE_404:
	if ( x7<6.39772e-08 )
		goto LINE_490;
	else if ( x7>=6.39772e-08 )
		goto LINE_491;
	else
		return 1.22209;
LINE_405:
	return 1.08977;
LINE_406:
	if ( x5<0.252716 )
		goto LINE_492;
	else if ( x5>=0.252716 )
		goto LINE_493;
	else
		return 1.26942;
LINE_407:
	return 1.3419;
LINE_408:
	if ( x6<5.49404e-05 )
		goto LINE_494;
	else if ( x6>=5.49404e-05 )
		goto LINE_495;
	else
		return 1.02784;
LINE_409:
	if ( x5<0.115881 )
		goto LINE_496;
	else if ( x5>=0.115881 )
		goto LINE_497;
	else
		return 1.04688;
LINE_410:
	if ( x5<0.147456 )
		goto LINE_498;
	else if ( x5>=0.147456 )
		goto LINE_499;
	else
		return 1.04565;
LINE_411:
	return 1.0843;
LINE_412:
	if ( x8<1.55798e-07 )
		goto LINE_500;
	else if ( x8>=1.55798e-07 )
		goto LINE_501;
	else
		return 1.17147;
LINE_413:
	if ( x7<5.6793e-05 )
		goto LINE_502;
	else if ( x7>=5.6793e-05 )
		goto LINE_503;
	else
		return 1.14297;
LINE_414:
	if ( x14<1.32717e-06 )
		goto LINE_504;
	else if ( x14>=1.32717e-06 )
		goto LINE_505;
	else
		return 0.991741;
LINE_415:
	return 0.899355;
LINE_416:
	if ( x5<0.047746 )
		goto LINE_506;
	else if ( x5>=0.047746 )
		goto LINE_507;
	else
		return 1.00875;
LINE_417:
	return 1.02648;
LINE_418:
	return 1.02343;
LINE_419:
	if ( x16<4.04926e-08 )
		goto LINE_508;
	else if ( x16>=4.04926e-08 )
		goto LINE_509;
	else
		return 1.01093;
LINE_420:
	if ( x16<1.62569e-09 )
		goto LINE_510;
	else if ( x16>=1.62569e-09 )
		goto LINE_511;
	else
		return 1.02289;
LINE_421:
	return 1.03282;
LINE_422:
	if ( x8<0.00353741 )
		goto LINE_512;
	else if ( x8>=0.00353741 )
		goto LINE_513;
	else
		return 1.01926;
LINE_423:
	return 1.03186;
LINE_424:
	return 1.02807;
LINE_425:
	if ( x8<0.00351149 )
		goto LINE_514;
	else if ( x8>=0.00351149 )
		goto LINE_515;
	else
		return 1.08178;
LINE_426:
	return 1.38524;
LINE_427:
	if ( x14<1.94707e-06 )
		goto LINE_516;
	else if ( x14>=1.94707e-06 )
		goto LINE_517;
	else
		return 1.55314;
LINE_428:
	return 1.40639;
LINE_429:
	return 1.31435;
LINE_430:
	return 1.41969;
LINE_431:
	return 1.58527;
LINE_432:
	if ( x16<6.63782e-09 )
		goto LINE_518;
	else if ( x16>=6.63782e-09 )
		goto LINE_519;
	else
		return 1.34877;
LINE_433:
	return 1.43472;
LINE_434:
	return 1.21662;
LINE_435:
	return 1.31643;
LINE_436:
	if ( x14<3.99819e-05 )
		goto LINE_520;
	else if ( x14>=3.99819e-05 )
		goto LINE_521;
	else
		return 1.32465;
LINE_437:
	return 1.54981;
LINE_438:
	return 1.40313;
LINE_439:
	return 1.26997;
LINE_440:
	if ( x14<5.91529e-05 )
		goto LINE_522;
	else if ( x14>=5.91529e-05 )
		goto LINE_523;
	else
		return 1.46022;
LINE_441:
	return 1.33778;
LINE_442:
	if ( x15<2.11411e-05 )
		goto LINE_524;
	else if ( x15>=2.11411e-05 )
		goto LINE_525;
	else
		return 1.50069;
LINE_443:
	return 1.69755;
LINE_444:
	if ( x8<4.06521e-09 )
		goto LINE_526;
	else if ( x8>=4.06521e-09 )
		goto LINE_527;
	else
		return 1.73495;
LINE_445:
	return 2.06777;
LINE_446:
	if ( x16<1.89078e-07 )
		goto LINE_528;
	else if ( x16>=1.89078e-07 )
		goto LINE_529;
	else
		return 1.62257;
LINE_447:
	return 1.74677;
LINE_448:
	if ( x6<1.5417e-06 )
		goto LINE_530;
	else if ( x6>=1.5417e-06 )
		goto LINE_531;
	else
		return 1.53701;
LINE_449:
	return 1.863;
LINE_450:
	return 1.62381;
LINE_451:
	return 1.68292;
LINE_452:
	if ( x5<0.331359 )
		goto LINE_532;
	else if ( x5>=0.331359 )
		goto LINE_533;
	else
		return 1.47727;
LINE_453:
	if ( x5<0.344609 )
		goto LINE_534;
	else if ( x5>=0.344609 )
		goto LINE_535;
	else
		return 1.56759;
LINE_454:
	if ( x5<0.330322 )
		goto LINE_536;
	else if ( x5>=0.330322 )
		goto LINE_537;
	else
		return 1.614;
LINE_455:
	if ( x6<1.75736e-06 )
		goto LINE_538;
	else if ( x6>=1.75736e-06 )
		goto LINE_539;
	else
		return 1.5478;
LINE_456:
	return 1.49492;
LINE_457:
	return 1.54408;
LINE_458:
	if ( x7<4.06579e-08 )
		goto LINE_540;
	else if ( x7>=4.06579e-08 )
		goto LINE_541;
	else
		return 1.67946;
LINE_459:
	if ( x7<5.85188e-08 )
		goto LINE_542;
	else if ( x7>=5.85188e-08 )
		goto LINE_543;
	else
		return 1.61216;
LINE_460:
	if ( x16<1.5842e-08 )
		goto LINE_544;
	else if ( x16>=1.5842e-08 )
		goto LINE_545;
	else
		return 1.76432;
LINE_461:
	if ( x13<0.37589 )
		goto LINE_546;
	else if ( x13>=0.37589 )
		goto LINE_547;
	else
		return 1.68097;
LINE_462:
	return 1.57908;
LINE_463:
	if ( x7<4.01007e-08 )
		goto LINE_548;
	else if ( x7>=4.01007e-08 )
		goto LINE_549;
	else
		return 1.67576;
LINE_464:
	return 1.7692;
LINE_465:
	if ( x8<0.000943725 )
		goto LINE_550;
	else if ( x8>=0.000943725 )
		goto LINE_551;
	else
		return 1.6929;
LINE_466:
	return 1.81641;
LINE_467:
	if ( x14<3.82268e-05 )
		goto LINE_552;
	else if ( x14>=3.82268e-05 )
		goto LINE_553;
	else
		return 1.75224;
LINE_468:
	if ( x5<0.381247 )
		goto LINE_554;
	else if ( x5>=0.381247 )
		goto LINE_555;
	else
		return 1.77255;
LINE_469:
	return 1.98933;
LINE_470:
	if ( x13<0.348193 )
		goto LINE_556;
	else if ( x13>=0.348193 )
		goto LINE_557;
	else
		return 1.76819;
LINE_471:
	if ( x15<2.02037e-06 )
		goto LINE_558;
	else if ( x15>=2.02037e-06 )
		goto LINE_559;
	else
		return 1.72463;
LINE_472:
	return 1.91619;
LINE_473:
	if ( x5<0.373701 )
		goto LINE_560;
	else if ( x5>=0.373701 )
		goto LINE_561;
	else
		return 1.7824;
LINE_474:
	return 1.82353;
LINE_475:
	return 1.7028;
LINE_476:
	return 1.73794;
LINE_477:
	if ( x13<0.0657544 )
		goto LINE_562;
	else if ( x13>=0.0657544 )
		goto LINE_563;
	else
		return 1.84882;
LINE_478:
	return 1.70172;
LINE_479:
	if ( x13<0.244529 )
		goto LINE_564;
	else if ( x13>=0.244529 )
		goto LINE_565;
	else
		return 1.80339;
LINE_480:
	if ( x15<4.50217e-05 )
		goto LINE_566;
	else if ( x15>=4.50217e-05 )
		goto LINE_567;
	else
		return 1.82194;
LINE_481:
	return 1.75884;
LINE_482:
	return 1.90233;
LINE_483:
	if ( x5<0.414126 )
		goto LINE_568;
	else if ( x5>=0.414126 )
		goto LINE_569;
	else
		return 1.79397;
LINE_484:
	return 1.8801;
LINE_485:
	return 1.9295;
LINE_486:
	return 1.80952;
LINE_487:
	if ( x5<0.407106 )
		goto LINE_570;
	else if ( x5>=0.407106 )
		goto LINE_571;
	else
		return 1.86131;
LINE_488:
	if ( x5<0.182088 )
		goto LINE_572;
	else if ( x5>=0.182088 )
		goto LINE_573;
	else
		return 1.32099;
LINE_489:
	if ( x5<0.205342 )
		goto LINE_574;
	else if ( x5>=0.205342 )
		goto LINE_575;
	else
		return 1.13599;
LINE_490:
	return 1.17948;
LINE_491:
	if ( x13<0.372749 )
		goto LINE_576;
	else if ( x13>=0.372749 )
		goto LINE_577;
	else
		return 1.24765;
LINE_492:
	if ( x6<1.56764e-06 )
		goto LINE_578;
	else if ( x6>=1.56764e-06 )
		goto LINE_579;
	else
		return 1.28396;
LINE_493:
	return 1.18943;
LINE_494:
	if ( x6<1.60411e-05 )
		goto LINE_580;
	else if ( x6>=1.60411e-05 )
		goto LINE_581;
	else
		return 1.03131;
LINE_495:
	return 0.991423;
LINE_496:
	return 1.00139;
LINE_497:
	if ( x13<0.345104 )
		goto LINE_582;
	else if ( x13>=0.345104 )
		goto LINE_583;
	else
		return 1.05038;
LINE_498:
	if ( x8<0.000984794 )
		goto LINE_584;
	else if ( x8>=0.000984794 )
		goto LINE_585;
	else
		return 1.03802;
LINE_499:
	return 1.05764;
LINE_500:
	if ( x5<0.232138 )
		goto LINE_586;
	else if ( x5>=0.232138 )
		goto LINE_587;
	else
		return 1.18296;
LINE_501:
	return 1.14158;
LINE_502:
	return 1.10905;
LINE_503:
	if ( x8<3.25137e-09 )
		goto LINE_588;
	else if ( x8>=3.25137e-09 )
		goto LINE_589;
	else
		return 1.14975;
LINE_504:
	return 0.933518;
LINE_505:
	if ( x7<5.52629e-06 )
		goto LINE_590;
	else if ( x7>=5.52629e-06 )
		goto LINE_591;
	else
		return 1.0007;
LINE_506:
	return 0.985258;
LINE_507:
	if ( x5<0.108289 )
		goto LINE_592;
	else if ( x5>=0.108289 )
		goto LINE_593;
	else
		return 1.01006;
LINE_508:
	if ( x15<3.97001e-08 )
		goto LINE_594;
	else if ( x15>=3.97001e-08 )
		goto LINE_595;
	else
		return 1.00712;
LINE_509:
	if ( x16<2.87935e-07 )
		goto LINE_596;
	else if ( x16>=2.87935e-07 )
		goto LINE_597;
	else
		return 1.01495;
LINE_510:
	return 1.03071;
LINE_511:
	return 1.02146;
LINE_512:
	return 1.00797;
LINE_513:
	return 1.0235;
LINE_514:
	return 1.05373;
LINE_515:
	return 1.10047;
LINE_516:
	if ( x15<9.52449e-08 )
		goto LINE_598;
	else if ( x15>=9.52449e-08 )
		goto LINE_599;
	else
		return 1.49827;
LINE_517:
	return 1.69032;
LINE_518:
	return 1.37217;
LINE_519:
	return 1.32871;
LINE_520:
	return 1.37714;
LINE_521:
	return 1.28383;
LINE_522:
	return 1.48765;
LINE_523:
	return 1.33675;
LINE_524:
	if ( x13<0.0745319 )
		goto LINE_600;
	else if ( x13>=0.0745319 )
		goto LINE_601;
	else
		return 1.48607;
LINE_525:
	return 1.69071;
LINE_526:
	return 1.53202;
LINE_527:
	return 1.78568;
LINE_528:
	return 1.64529;
LINE_529:
	return 1.52031;
LINE_530:
	return 1.43364;
LINE_531:
	if ( x13<0.237764 )
		goto LINE_602;
	else if ( x13>=0.237764 )
		goto LINE_603;
	else
		return 1.57578;
LINE_532:
	return 1.55556;
LINE_533:
	if ( x8<1.12136e-07 )
		goto LINE_604;
	else if ( x8>=1.12136e-07 )
		goto LINE_605;
	else
		return 1.46423;
LINE_534:
	return 1.5966;
LINE_535:
	return 1.51682;
LINE_536:
	return 1.45667;
LINE_537:
	if ( x13<0.355282 )
		goto LINE_606;
	else if ( x13>=0.355282 )
		goto LINE_607;
	else
		return 1.6283;
LINE_538:
	if ( x15<5.01737e-08 )
		goto LINE_608;
	else if ( x15>=5.01737e-08 )
		goto LINE_609;
	else
		return 1.51825;
LINE_539:
	if ( x13<0.369627 )
		goto LINE_610;
	else if ( x13>=0.369627 )
		goto LINE_611;
	else
		return 1.58416;
LINE_540:
	if ( x5<0.354024 )
		goto LINE_612;
	else if ( x5>=0.354024 )
		goto LINE_613;
	else
		return 1.61822;
LINE_541:
	if ( x15<2.26633e-07 )
		goto LINE_614;
	else if ( x15>=2.26633e-07 )
		goto LINE_615;
	else
		return 1.73195;
LINE_542:
	if ( x14<1.57132e-06 )
		goto LINE_616;
	else if ( x14>=1.57132e-06 )
		goto LINE_617;
	else
		return 1.55954;
LINE_543:
	if ( x13<0.216993 )
		goto LINE_618;
	else if ( x13>=0.216993 )
		goto LINE_619;
	else
		return 1.65629;
LINE_544:
	return 1.91964;
LINE_545:
	if ( x16<0.000956158 )
		goto LINE_620;
	else if ( x16>=0.000956158 )
		goto LINE_621;
	else
		return 1.7298;
LINE_546:
	if ( x14<3.77309e-05 )
		goto LINE_622;
	else if ( x14>=3.77309e-05 )
		goto LINE_623;
	else
		return 1.71013;
LINE_547:
	if ( x5<0.362795 )
		goto LINE_624;
	else if ( x5>=0.362795 )
		goto LINE_625;
	else
		return 1.63514;
LINE_548:
	return 1.52578;
LINE_549:
	if ( x5<0.390455 )
		goto LINE_626;
	else if ( x5>=0.390455 )
		goto LINE_627;
	else
		return 1.70303;
LINE_550:
	if ( x15<6.06863e-08 )
		goto LINE_628;
	else if ( x15>=6.06863e-08 )
		goto LINE_629;
	else
		return 1.6848;
LINE_551:
	return 1.78601;
LINE_552:
	if ( x14<1.99089e-06 )
		goto LINE_630;
	else if ( x14>=1.99089e-06 )
		goto LINE_631;
	else
		return 1.74364;
LINE_553:
	return 1.8383;
LINE_554:
	return 1.89618;
LINE_555:
	if ( x7<6.42353e-08 )
		goto LINE_632;
	else if ( x7>=6.42353e-08 )
		goto LINE_633;
	else
		return 1.74783;
LINE_556:
	if ( x8<2.98026e-09 )
		goto LINE_634;
	else if ( x8>=2.98026e-09 )
		goto LINE_635;
	else
		return 1.79242;
LINE_557:
	if ( x8<2.98037e-09 )
		goto LINE_636;
	else if ( x8>=2.98037e-09 )
		goto LINE_637;
	else
		return 1.75647;
LINE_558:
	return 1.29317;
LINE_559:
	if ( x5<0.395126 )
		goto LINE_638;
	else if ( x5>=0.395126 )
		goto LINE_639;
	else
		return 1.73491;
LINE_560:
	return 1.63732;
LINE_561:
	if ( x13<0.360432 )
		goto LINE_640;
	else if ( x13>=0.360432 )
		goto LINE_641;
	else
		return 1.78577;
LINE_562:
	return 1.88103;
LINE_563:
	return 1.81661;
LINE_564:
	return 1.68813;
LINE_565:
	if ( x5<0.355991 )
		goto LINE_642;
	else if ( x5>=0.355991 )
		goto LINE_643;
	else
		return 1.80916;
LINE_566:
	if ( x5<0.407115 )
		goto LINE_644;
	else if ( x5>=0.407115 )
		goto LINE_645;
	else
		return 1.82943;
LINE_567:
	return 1.80094;
LINE_568:
	return 1.81847;
LINE_569:
	return 1.77491;
LINE_570:
	return 1.8159;
LINE_571:
	if ( x16<0.000946749 )
		goto LINE_646;
	else if ( x16>=0.000946749 )
		goto LINE_647;
	else
		return 1.87429;
LINE_572:
	return 1.76126;
LINE_573:
	if ( x16<5.28318e-09 )
		goto LINE_648;
	else if ( x16>=5.28318e-09 )
		goto LINE_649;
	else
		return 1.29347;
LINE_574:
	return 1.04379;
LINE_575:
	return 1.20186;
LINE_576:
	return 1.12981;
LINE_577:
	return 1.26075;
LINE_578:
	return 1.25027;
LINE_579:
	return 1.2966;
LINE_580:
	if ( x5<0.153197 )
		goto LINE_650;
	else if ( x5>=0.153197 )
		goto LINE_651;
	else
		return 1.02225;
LINE_581:
	if ( x14<1.366e-06 )
		goto LINE_652;
	else if ( x14>=1.366e-06 )
		goto LINE_653;
	else
		return 1.0381;
LINE_582:
	return 1.05916;
LINE_583:
	return 1.03634;
LINE_584:
	if ( x6<1.59619e-05 )
		goto LINE_654;
	else if ( x6>=1.59619e-05 )
		goto LINE_655;
	else
		return 1.03552;
LINE_585:
	return 1.06301;
LINE_586:
	return 1.19236;
LINE_587:
	return 1.16181;
LINE_588:
	return 1.10879;
LINE_589:
	if ( x16<1.01596e-08 )
		goto LINE_656;
	else if ( x16>=1.01596e-08 )
		goto LINE_657;
	else
		return 1.15268;
LINE_590:
	return 1.01334;
LINE_591:
	return 0.980475;
LINE_592:
	return 1.01155;
LINE_593:
	return 0.998148;
LINE_594:
	return 0.99653;
LINE_595:
	if ( x15<5.46076e-08 )
		goto LINE_658;
	else if ( x15>=5.46076e-08 )
		goto LINE_659;
	else
		return 1.00836;
LINE_596:
	if ( x16<1.0105e-07 )
		goto LINE_660;
	else if ( x16>=1.0105e-07 )
		goto LINE_661;
	else
		return 1.01398;
LINE_597:
	return 1.03139;
LINE_598:
	return 1.44623;
LINE_599:
	return 1.70641;
LINE_600:
	return 1.46241;
LINE_601:
	return 1.52392;
LINE_602:
	return 1.84354;
LINE_603:
	if ( x16<0.000464808 )
		goto LINE_662;
	else if ( x16>=0.000464808 )
		goto LINE_663;
	else
		return 1.55793;
LINE_604:
	return 1.4423;
LINE_605:
	return 1.48616;
LINE_606:
	return 1.49333;
LINE_607:
	if ( x7<3.83527e-08 )
		goto LINE_664;
	else if ( x7>=3.83527e-08 )
		goto LINE_665;
	else
		return 1.6418;
LINE_608:
	return 1.61872;
LINE_609:
	if ( x16<1.01658e-07 )
		goto LINE_666;
	else if ( x16>=1.01658e-07 )
		goto LINE_667;
	else
		return 1.5039;
LINE_610:
	return 1.65072;
LINE_611:
	return 1.55458;
LINE_612:
	if ( x16<0.000944532 )
		goto LINE_668;
	else if ( x16>=0.000944532 )
		goto LINE_669;
	else
		return 1.58258;
LINE_613:
	return 1.67763;
LINE_614:
	if ( x13<0.307829 )
		goto LINE_670;
	else if ( x13>=0.307829 )
		goto LINE_671;
	else
		return 1.77342;
LINE_615:
	return 1.62827;
LINE_616:
	return 1.30561;
LINE_617:
	if ( x13<0.379739 )
		goto LINE_672;
	else if ( x13>=0.379739 )
		goto LINE_673;
	else
		return 1.59266;
LINE_618:
	return 1.36937;
LINE_619:
	if ( x14<0.000180058 )
		goto LINE_674;
	else if ( x14>=0.000180058 )
		goto LINE_675;
	else
		return 1.66586;
LINE_620:
	if ( x7<2.91934e-07 )
		goto LINE_676;
	else if ( x7>=2.91934e-07 )
		goto LINE_677;
	else
		return 1.71795;
LINE_621:
	return 2.03793;
LINE_622:
	if ( x14<3.58698e-05 )
		goto LINE_678;
	else if ( x14>=3.58698e-05 )
		goto LINE_679;
	else
		return 1.7324;
LINE_623:
	if ( x5<0.355096 )
		goto LINE_680;
	else if ( x5>=0.355096 )
		goto LINE_681;
	else
		return 1.63033;
LINE_624:
	if ( x6<1.64929e-06 )
		goto LINE_682;
	else if ( x6>=1.64929e-06 )
		goto LINE_683;
	else
		return 1.61509;
LINE_625:
	return 1.7153;
LINE_626:
	return 1.68152;
LINE_627:
	return 1.79983;
LINE_628:
	return 1.64997;
LINE_629:
	if ( x5<0.372697 )
		goto LINE_684;
	else if ( x5>=0.372697 )
		goto LINE_685;
	else
		return 1.70338;
LINE_630:
	return 1.78232;
LINE_631:
	return 1.73397;
LINE_632:
	return 1.70573;
LINE_633:
	return 1.7759;
LINE_634:
	return 1.70196;
LINE_635:
	if ( x13<0.246663 )
		goto LINE_686;
	else if ( x13>=0.246663 )
		goto LINE_687;
	else
		return 1.80634;
LINE_636:
	return 1.81737;
LINE_637:
	if ( x14<0.000838392 )
		goto LINE_688;
	else if ( x14>=0.000838392 )
		goto LINE_689;
	else
		return 1.75151;
LINE_638:
	if ( x15<4.00592e-05 )
		goto LINE_690;
	else if ( x15>=4.00592e-05 )
		goto LINE_691;
	else
		return 1.74464;
LINE_639:
	return 1.60831;
LINE_640:
	if ( x8<2.34093e-07 )
		goto LINE_692;
	else if ( x8>=2.34093e-07 )
		goto LINE_693;
	else
		return 1.80754;
LINE_641:
	if ( x5<0.390342 )
		goto LINE_694;
	else if ( x5>=0.390342 )
		goto LINE_695;
	else
		return 1.76075;
LINE_642:
	return 1.85396;
LINE_643:
	if ( x5<0.356041 )
		goto LINE_696;
	else if ( x5>=0.356041 )
		goto LINE_697;
	else
		return 1.79795;
LINE_644:
	return 1.81566;
LINE_645:
	return 1.83709;
LINE_646:
	if ( x14<2.14641e-05 )
		goto LINE_698;
	else if ( x14>=2.14641e-05 )
		goto LINE_699;
	else
		return 1.8662;
LINE_647:
	return 1.92285;
LINE_648:
	return 1.20132;
LINE_649:
	if ( x13<0.301245 )
		goto LINE_700;
	else if ( x13>=0.301245 )
		goto LINE_701;
	else
		return 1.34877;
LINE_650:
	if ( x7<2.04501e-05 )
		goto LINE_702;
	else if ( x7>=2.04501e-05 )
		goto LINE_703;
	else
		return 1.02863;
LINE_651:
	return 0.971248;
LINE_652:
	return 1.01503;
LINE_653:
	if ( x5<0.138747 )
		goto LINE_704;
	else if ( x5>=0.138747 )
		goto LINE_705;
	else
		return 1.04417;
LINE_654:
	return 1.04593;
LINE_655:
	return 1.03292;
LINE_656:
	return 1.14315;
LINE_657:
	return 1.15797;
LINE_658:
	return 1.0188;
LINE_659:
	if ( x14<1.42849e-06 )
		goto LINE_706;
	else if ( x14>=1.42849e-06 )
		goto LINE_707;
	else
		return 1.00613;
LINE_660:
	return 1.01786;
LINE_661:
	return 1.01054;
LINE_662:
	if ( x5<0.322123 )
		goto LINE_708;
	else if ( x5>=0.322123 )
		goto LINE_709;
	else
		return 1.51137;
LINE_663:
	return 1.65104;
LINE_664:
	return 1.77959;
LINE_665:
	if ( x13<0.372722 )
		goto LINE_710;
	else if ( x13>=0.372722 )
		goto LINE_711;
	else
		return 1.63455;
LINE_666:
	return 1.56928;
LINE_667:
	if ( x16<0.000945723 )
		goto LINE_712;
	else if ( x16>=0.000945723 )
		goto LINE_713;
	else
		return 1.49301;
LINE_668:
	if ( x6<1.22801e-06 )
		goto LINE_714;
	else if ( x6>=1.22801e-06 )
		goto LINE_715;
	else
		return 1.57069;
LINE_669:
	return 1.74895;
LINE_670:
	return 2.00218;
LINE_671:
	if ( x5<0.347499 )
		goto LINE_716;
	else if ( x5>=0.347499 )
		goto LINE_717;
	else
		return 1.71623;
LINE_672:
	if ( x13<0.366492 )
		goto LINE_718;
	else if ( x13>=0.366492 )
		goto LINE_719;
	else
		return 1.57209;
LINE_673:
	return 1.62465;
LINE_674:
	if ( x6<1.65179e-06 )
		goto LINE_720;
	else if ( x6>=1.65179e-06 )
		goto LINE_721;
	else
		return 1.67938;
LINE_675:
	return 1.47656;
LINE_676:
	if ( x5<0.347417 )
		goto LINE_722;
	else if ( x5>=0.347417 )
		goto LINE_723;
	else
		return 1.7018;
LINE_677:
	return 1.80679;
LINE_678:
	if ( x14<3.51161e-05 )
		goto LINE_724;
	else if ( x14>=3.51161e-05 )
		goto LINE_725;
	else
		return 1.7237;
LINE_679:
	return 2.09784;
LINE_680:
	return 1.57386;
LINE_681:
	return 1.68681;
LINE_682:
	return 1.68308;
LINE_683:
	if ( x13<0.409667 )
		goto LINE_726;
	else if ( x13>=0.409667 )
		goto LINE_727;
	else
		return 1.59243;
LINE_684:
	if ( x16<9.48381e-10 )
		goto LINE_728;
	else if ( x16>=9.48381e-10 )
		goto LINE_729;
	else
		return 1.68797;
LINE_685:
	return 1.76505;
LINE_686:
	return 1.71555;
LINE_687:
	if ( x6<2.74709e-06 )
		goto LINE_730;
	else if ( x6>=2.74709e-06 )
		goto LINE_731;
	else
		return 1.8262;
LINE_688:
	if ( x13<0.375404 )
		goto LINE_732;
	else if ( x13>=0.375404 )
		goto LINE_733;
	else
		return 1.74989;
LINE_689:
	return 1.88933;
LINE_690:
	if ( x7<5.14778e-08 )
		goto LINE_734;
	else if ( x7>=5.14778e-08 )
		goto LINE_735;
	else
		return 1.75682;
LINE_691:
	if ( x5<0.389843 )
		goto LINE_736;
	else if ( x5>=0.389843 )
		goto LINE_737;
	else
		return 1.71726;
LINE_692:
	return 1.95826;
LINE_693:
	if ( x7<2.30469e-06 )
		goto LINE_738;
	else if ( x7>=2.30469e-06 )
		goto LINE_739;
	else
		return 1.80069;
LINE_694:
	if ( x5<0.384757 )
		goto LINE_740;
	else if ( x5>=0.384757 )
		goto LINE_741;
	else
		return 1.7515;
LINE_695:
	return 1.78232;
LINE_696:
	return 1.67631;
LINE_697:
	if ( x14<3.59243e-05 )
		goto LINE_742;
	else if ( x14>=3.59243e-05 )
		goto LINE_743;
	else
		return 1.80606;
LINE_698:
	if ( x13<0.375737 )
		goto LINE_744;
	else if ( x13>=0.375737 )
		goto LINE_745;
	else
		return 1.87999;
LINE_699:
	return 1.83862;
LINE_700:
	return 1.5418;
LINE_701:
	return 1.32732;
LINE_702:
	return 1.01485;
LINE_703:
	if ( x6<1.24094e-05 )
		goto LINE_746;
	else if ( x6>=1.24094e-05 )
		goto LINE_747;
	else
		return 1.03689;
LINE_704:
	if ( x7<1.92926e-05 )
		goto LINE_748;
	else if ( x7>=1.92926e-05 )
		goto LINE_749;
	else
		return 1.03514;
LINE_705:
	return 1.05658;
LINE_706:
	return 1.01944;
LINE_707:
	if ( x7<8.21997e-07 )
		goto LINE_750;
	else if ( x7>=8.21997e-07 )
		goto LINE_751;
	else
		return 1.0051;
LINE_708:
	return 1.69151;
LINE_709:
	return 1.49136;
LINE_710:
	return 1.602;
LINE_711:
	if ( x8<7.04515e-09 )
		goto LINE_752;
	else if ( x8>=7.04515e-09 )
		goto LINE_753;
	else
		return 1.64957;
LINE_712:
	if ( x8<4.52643e-08 )
		goto LINE_754;
	else if ( x8>=4.52643e-08 )
		goto LINE_755;
	else
		return 1.4848;
LINE_713:
	return 1.58322;
LINE_714:
	return 1.45852;
LINE_715:
	if ( x14<1.62932e-06 )
		goto LINE_756;
	else if ( x14>=1.62932e-06 )
		goto LINE_757;
	else
		return 1.57932;
LINE_716:
	return 1.84113;
LINE_717:
	if ( x7<4.40268e-08 )
		goto LINE_758;
	else if ( x7>=4.40268e-08 )
		goto LINE_759;
	else
		return 1.69838;
LINE_718:
	if ( x8<1.18491e-07 )
		goto LINE_760;
	else if ( x8>=1.18491e-07 )
		goto LINE_761;
	else
		return 1.57795;
LINE_719:
	return 1.49589;
LINE_720:
	if ( x14<3.87964e-05 )
		goto LINE_762;
	else if ( x14>=3.87964e-05 )
		goto LINE_763;
	else
		return 1.72898;
LINE_721:
	if ( x5<0.347429 )
		goto LINE_764;
	else if ( x5>=0.347429 )
		goto LINE_765;
	else
		return 1.64728;
LINE_722:
	return 1.82851;
LINE_723:
	if ( x6<1.63266e-06 )
		goto LINE_766;
	else if ( x6>=1.63266e-06 )
		goto LINE_767;
	else
		return 1.68913;
LINE_724:
	if ( x13<0.291549 )
		goto LINE_768;
	else if ( x13>=0.291549 )
		goto LINE_769;
	else
		return 1.72963;
LINE_725:
	return 1.48055;
LINE_726:
	if ( x5<0.351175 )
		goto LINE_770;
	else if ( x5>=0.351175 )
		goto LINE_771;
	else
		return 1.61543;
LINE_727:
	return 1.51885;
LINE_728:
	return 1.78656;
LINE_729:
	if ( x8<1.89753e-09 )
		goto LINE_772;
	else if ( x8>=1.89753e-09 )
		goto LINE_773;
	else
		return 1.679;
LINE_730:
	if ( x5<0.380986 )
		goto LINE_774;
	else if ( x5>=0.380986 )
		goto LINE_775;
	else
		return 1.84369;
LINE_731:
	return 1.70378;
LINE_732:
	if ( x6<1.76185e-06 )
		goto LINE_776;
	else if ( x6>=1.76185e-06 )
		goto LINE_777;
	else
		return 1.73515;
LINE_733:
	if ( x6<1.97993e-06 )
		goto LINE_778;
	else if ( x6>=1.97993e-06 )
		goto LINE_779;
	else
		return 1.76363;
LINE_734:
	return 1.84525;
LINE_735:
	if ( x14<5.34691e-05 )
		goto LINE_780;
	else if ( x14>=5.34691e-05 )
		goto LINE_781;
	else
		return 1.74576;
LINE_736:
	if ( x16<2.46565e-08 )
		goto LINE_782;
	else if ( x16>=2.46565e-08 )
		goto LINE_783;
	else
		return 1.69953;
LINE_737:
	return 1.80589;
LINE_738:
	if ( x13<0.270255 )
		goto LINE_784;
	else if ( x13>=0.270255 )
		goto LINE_785;
	else
		return 1.82149;
LINE_739:
	return 1.76428;
LINE_740:
	if ( x13<0.38958 )
		goto LINE_786;
	else if ( x13>=0.38958 )
		goto LINE_787;
	else
		return 1.76384;
LINE_741:
	return 1.72064;
LINE_742:
	if ( x15<8.29651e-08 )
		goto LINE_788;
	else if ( x15>=8.29651e-08 )
		goto LINE_789;
	else
		return 1.82397;
LINE_743:
	return 1.77025;
LINE_744:
	return 1.87338;
LINE_745:
	return 1.8932;
LINE_746:
	return 1.05462;
LINE_747:
	return 1.03246;
LINE_748:
	return 1.05965;
LINE_749:
	if ( x7<2.54025e-05 )
		goto LINE_790;
	else if ( x7>=2.54025e-05 )
		goto LINE_791;
	else
		return 1.03269;
LINE_750:
	return 0.999582;
LINE_751:
	return 1.00756;
LINE_752:
	return 1.70907;
LINE_753:
	if ( x16<7.03169e-08 )
		goto LINE_792;
	else if ( x16>=7.03169e-08 )
		goto LINE_793;
	else
		return 1.63875;
LINE_754:
	return 1.47477;
LINE_755:
	return 1.51157;
LINE_756:
	return 1.64463;
LINE_757:
	if ( x15<1.28086e-06 )
		goto LINE_794;
	else if ( x15>=1.28086e-06 )
		goto LINE_795;
	else
		return 1.55973;
LINE_758:
	return 1.72863;
LINE_759:
	if ( x15<4.53518e-08 )
		goto LINE_796;
	else if ( x15>=4.53518e-08 )
		goto LINE_797;
	else
		return 1.68628;
LINE_760:
	return 1.58896;
LINE_761:
	return 1.55318;
LINE_762:
	if ( x14<1.55891e-06 )
		goto LINE_798;
	else if ( x14>=1.55891e-06 )
		goto LINE_799;
	else
		return 1.71383;
LINE_763:
	return 1.88039;
LINE_764:
	return 1.79804;
LINE_765:
	if ( x15<6.55832e-08 )
		goto LINE_800;
	else if ( x15>=6.55832e-08 )
		goto LINE_801;
	else
		return 1.63786;
LINE_766:
	return 1.55131;
LINE_767:
	if ( x7<9.1718e-08 )
		goto LINE_802;
	else if ( x7>=9.1718e-08 )
		goto LINE_803;
	else
		return 1.70444;
LINE_768:
	return 1.86157;
LINE_769:
	if ( x5<0.347254 )
		goto LINE_804;
	else if ( x5>=0.347254 )
		goto LINE_805;
	else
		return 1.71536;
LINE_770:
	return 1.65695;
LINE_771:
	if ( x5<0.352089 )
		goto LINE_806;
	else if ( x5>=0.352089 )
		goto LINE_807;
	else
		return 1.59051;
LINE_772:
	return 1.63644;
LINE_773:
	return 1.68846;
LINE_774:
	return 1.92953;
LINE_775:
	if ( x8<3.18339e-08 )
		goto LINE_808;
	else if ( x8>=3.18339e-08 )
		goto LINE_809;
	else
		return 1.82028;
LINE_776:
	return 1.77357;
LINE_777:
	if ( x16<8.96851e-08 )
		goto LINE_810;
	else if ( x16>=8.96851e-08 )
		goto LINE_811;
	else
		return 1.72583;
LINE_778:
	if ( x6<1.81101e-06 )
		goto LINE_812;
	else if ( x6>=1.81101e-06 )
		goto LINE_813;
	else
		return 1.78298;
LINE_779:
	if ( x5<0.38491 )
		goto LINE_814;
	else if ( x5>=0.38491 )
		goto LINE_815;
	else
		return 1.74244;
LINE_780:
	if ( x7<7.07235e-08 )
		goto LINE_816;
	else if ( x7>=7.07235e-08 )
		goto LINE_817;
	else
		return 1.74966;
LINE_781:
	return 1.65601;
LINE_782:
	return 1.73345;
LINE_783:
	return 1.68499;
LINE_784:
	return 1.79213;
LINE_785:
	return 1.86063;
LINE_786:
	return 1.74995;
LINE_787:
	return 1.78468;
LINE_788:
	return 1.80647;
LINE_789:
	return 1.85022;
LINE_790:
	return 1.02886;
LINE_791:
	return 1.03652;
LINE_792:
	return 1.62727;
LINE_793:
	return 1.66937;
LINE_794:
	return 1.5676;
LINE_795:
	return 1.48893;
LINE_796:
	return 1.6437;
LINE_797:
	return 1.69692;
LINE_798:
	return 1.76427;
LINE_799:
	return 1.6634;
LINE_800:
	return 1.57402;
LINE_801:
	if ( x7<6.56536e-08 )
		goto LINE_818;
	else if ( x7>=6.56536e-08 )
		goto LINE_819;
	else
		return 1.65914;
LINE_802:
	return 1.74009;
LINE_803:
	if ( x6<3.66063e-06 )
		goto LINE_820;
	else if ( x6>=3.66063e-06 )
		goto LINE_821;
	else
		return 1.68662;
LINE_804:
	return 1.80068;
LINE_805:
	if ( x5<0.348555 )
		goto LINE_822;
	else if ( x5>=0.348555 )
		goto LINE_823;
	else
		return 1.69183;
LINE_806:
	return 1.43579;
LINE_807:
	return 1.60771;
LINE_808:
	if ( x16<1.48373e-07 )
		goto LINE_824;
	else if ( x16>=1.48373e-07 )
		goto LINE_825;
	else
		return 1.7938;
LINE_809:
	return 1.85853;
LINE_810:
	if ( x16<7.46774e-08 )
		goto LINE_826;
	else if ( x16>=7.46774e-08 )
		goto LINE_827;
	else
		return 1.71173;
LINE_811:
	if ( x8<1.64299e-07 )
		goto LINE_828;
	else if ( x8>=1.64299e-07 )
		goto LINE_829;
	else
		return 1.75052;
LINE_812:
	if ( x15<1.74122e-07 )
		goto LINE_830;
	else if ( x15>=1.74122e-07 )
		goto LINE_831;
	else
		return 1.75686;
LINE_813:
	if ( x8<5.31395e-08 )
		goto LINE_832;
	else if ( x8>=5.31395e-08 )
		goto LINE_833;
	else
		return 1.81147;
LINE_814:
	if ( x6<2.2866e-06 )
		goto LINE_834;
	else if ( x6>=2.2866e-06 )
		goto LINE_835;
	else
		return 1.76131;
LINE_815:
	return 1.71178;
LINE_816:
	return 1.72425;
LINE_817:
	if ( x6<1.90748e-06 )
		goto LINE_836;
	else if ( x6>=1.90748e-06 )
		goto LINE_837;
	else
		return 1.76322;
LINE_818:
	return 1.68133;
LINE_819:
	return 1.61477;
LINE_820:
	return 1.65821;
LINE_821:
	return 1.71503;
LINE_822:
	return 1.60114;
LINE_823:
	if ( x7<7.56577e-08 )
		goto LINE_838;
	else if ( x7>=7.56577e-08 )
		goto LINE_839;
	else
		return 1.70229;
LINE_824:
	if ( x15<3.56428e-08 )
		goto LINE_840;
	else if ( x15>=3.56428e-08 )
		goto LINE_841;
	else
		return 1.78297;
LINE_825:
	return 1.85334;
LINE_826:
	if ( x14<0.0005079 )
		goto LINE_842;
	else if ( x14>=0.0005079 )
		goto LINE_843;
	else
		return 1.72193;
LINE_827:
	return 1.65053;
LINE_828:
	if ( x6<1.80373e-06 )
		goto LINE_844;
	else if ( x6>=1.80373e-06 )
		goto LINE_845;
	else
		return 1.74362;
LINE_829:
	return 1.82636;
LINE_830:
	if ( x13<0.406143 )
		goto LINE_846;
	else if ( x13>=0.406143 )
		goto LINE_847;
	else
		return 1.7695;
LINE_831:
	return 1.69367;
LINE_832:
	return 1.82055;
LINE_833:
	return 1.77063;
LINE_834:
	return 1.73297;
LINE_835:
	return 1.78561;
LINE_836:
	return 1.74333;
LINE_837:
	return 1.78595;
LINE_838:
	return 1.84152;
LINE_839:
	if ( x13<0.2956 )
		goto LINE_848;
	else if ( x13>=0.2956 )
		goto LINE_849;
	else
		return 1.69069;
LINE_840:
	return 1.87006;
LINE_841:
	if ( x14<1.83027e-06 )
		goto LINE_850;
	else if ( x14>=1.83027e-06 )
		goto LINE_851;
	else
		return 1.77426;
LINE_842:
	if ( x6<1.89944e-06 )
		goto LINE_852;
	else if ( x6>=1.89944e-06 )
		goto LINE_853;
	else
		return 1.71118;
LINE_843:
	return 1.75954;
LINE_844:
	return 1.68716;
LINE_845:
	if ( x14<1.73901e-06 )
		goto LINE_854;
	else if ( x14>=1.73901e-06 )
		goto LINE_855;
	else
		return 1.74927;
LINE_846:
	return 1.78542;
LINE_847:
	return 1.73235;
LINE_848:
	return 1.84831;
LINE_849:
	if ( x13<0.299196 )
		goto LINE_856;
	else if ( x13>=0.299196 )
		goto LINE_857;
	else
		return 1.68384;
LINE_850:
	return 1.75499;
LINE_851:
	return 1.79353;
LINE_852:
	return 1.74575;
LINE_853:
	if ( x14<1.6096e-06 )
		goto LINE_858;
	else if ( x14>=1.6096e-06 )
		goto LINE_859;
	else
		return 1.69735;
LINE_854:
	return 1.69962;
LINE_855:
	return 1.75478;
LINE_856:
	return 1.56999;
LINE_857:
	if ( x5<0.363838 )
		goto LINE_860;
	else if ( x5>=0.363838 )
		goto LINE_861;
	else
		return 1.69468;
LINE_858:
	return 1.75222;
LINE_859:
	return 1.69126;
LINE_860:
	if ( x7<2.23475e-06 )
		goto LINE_862;
	else if ( x7>=2.23475e-06 )
		goto LINE_863;
	else
		return 1.70946;
LINE_861:
	return 1.6474;
LINE_862:
	if ( x6<2.25264e-06 )
		goto LINE_864;
	else if ( x6>=2.25264e-06 )
		goto LINE_865;
	else
		return 1.71635;
LINE_863:
	return 1.66122;
LINE_864:
	return 1.70106;
LINE_865:
	return 1.73673;
}

inline double regression_cmp (double x1, double x2, double x3, double x4, double x5, double x6, double x7, double x8,
	double x9, double x10, double x11, double x12, double x13, double x14, double x15, double x16) {
LINE_1:
	if ( x5<0.254875 )
		goto LINE_2;
	else if ( x5>=0.254875 )
		goto LINE_3;
	else
		return 1.562;
LINE_2:
	if ( x8<0.00121589 )
		goto LINE_4;
	else if ( x8>=0.00121589 )
		goto LINE_5;
	else
		return 1.22545;
LINE_3:
	if ( x5<0.345509 )
		goto LINE_6;
	else if ( x5>=0.345509 )
		goto LINE_7;
	else
		return 1.70487;
LINE_4:
	if ( x13<0.22285 )
		goto LINE_8;
	else if ( x13>=0.22285 )
		goto LINE_9;
	else
		return 1.35729;
LINE_5:
	if ( x5<0.114461 )
		goto LINE_10;
	else if ( x5>=0.114461 )
		goto LINE_11;
	else
		return 1.03656;
LINE_6:
	if ( x6<0.000187214 )
		goto LINE_12;
	else if ( x6>=0.000187214 )
		goto LINE_13;
	else
		return 1.5671;
LINE_7:
	if ( x5<0.398229 )
		goto LINE_14;
	else if ( x5>=0.398229 )
		goto LINE_15;
	else
		return 1.7659;
LINE_8:
	if ( x7<2.8684e-07 )
		goto LINE_16;
	else if ( x7>=2.8684e-07 )
		goto LINE_17;
	else
		return 1.81829;
LINE_9:
	if ( x15<5.49973e-06 )
		goto LINE_18;
	else if ( x15>=5.49973e-06 )
		goto LINE_19;
	else
		return 1.23202;
LINE_10:
	if ( x14<1.41503e-05 )
		goto LINE_20;
	else if ( x14>=1.41503e-05 )
		goto LINE_21;
	else
		return 1.01703;
LINE_11:
	if ( x13<0.261418 )
		goto LINE_22;
	else if ( x13>=0.261418 )
		goto LINE_23;
	else
		return 1.11468;
LINE_12:
	if ( x7<7.78501e-06 )
		goto LINE_24;
	else if ( x7>=7.78501e-06 )
		goto LINE_25;
	else
		return 1.54715;
LINE_13:
	if ( x13<0.115168 )
		goto LINE_26;
	else if ( x13>=0.115168 )
		goto LINE_27;
	else
		return 1.87775;
LINE_14:
	if ( x6<5.35538e-05 )
		goto LINE_28;
	else if ( x6>=5.35538e-05 )
		goto LINE_29;
	else
		return 1.74156;
LINE_15:
	if ( x13<0.256847 )
		goto LINE_30;
	else if ( x13>=0.256847 )
		goto LINE_31;
	else
		return 1.85432;
LINE_16:
	if ( x15<2.83906e-07 )
		goto LINE_32;
	else if ( x15>=2.83906e-07 )
		goto LINE_33;
	else
		return 1.20082;
LINE_17:
	if ( x8<5.15567e-05 )
		goto LINE_34;
	else if ( x8>=5.15567e-05 )
		goto LINE_35;
	else
		return 1.99927;
LINE_18:
	if ( x7<4.30661e-06 )
		goto LINE_36;
	else if ( x7>=4.30661e-06 )
		goto LINE_37;
	else
		return 1.19814;
LINE_19:
	if ( x6<0.000158406 )
		goto LINE_38;
	else if ( x6>=0.000158406 )
		goto LINE_39;
	else
		return 1.58776;
LINE_20:
	if ( x8<0.00355498 )
		goto LINE_40;
	else if ( x8>=0.00355498 )
		goto LINE_41;
	else
		return 0.996192;
LINE_21:
	if ( x16<0.000121091 )
		goto LINE_42;
	else if ( x16>=0.000121091 )
		goto LINE_43;
	else
		return 1.05139;
LINE_22:
	if ( x16<1.25359e-07 )
		goto LINE_44;
	else if ( x16>=1.25359e-07 )
		goto LINE_45;
	else
		return 1.19818;
LINE_23:
	if ( x5<0.129387 )
		goto LINE_46;
	else if ( x5>=0.129387 )
		goto LINE_47;
	else
		return 1.05205;
LINE_24:
	if ( x5<0.310391 )
		goto LINE_48;
	else if ( x5>=0.310391 )
		goto LINE_49;
	else
		return 1.51356;
LINE_25:
	if ( x13<0.167176 )
		goto LINE_50;
	else if ( x13>=0.167176 )
		goto LINE_51;
	else
		return 1.75223;
LINE_26:
	return 2.63065;
LINE_27:
	if ( x15<5.45093e-08 )
		goto LINE_52;
	else if ( x15>=5.45093e-08 )
		goto LINE_53;
	else
		return 1.65188;
LINE_28:
	if ( x5<0.368493 )
		goto LINE_54;
	else if ( x5>=0.368493 )
		goto LINE_55;
	else
		return 1.7208;
LINE_29:
	if ( x13<0.23722 )
		goto LINE_56;
	else if ( x13>=0.23722 )
		goto LINE_57;
	else
		return 1.91391;
LINE_30:
	if ( x15<4.30958e-07 )
		goto LINE_58;
	else if ( x15>=4.30958e-07 )
		goto LINE_59;
	else
		return 1.90057;
LINE_31:
	if ( x5<0.403856 )
		goto LINE_60;
	else if ( x5>=0.403856 )
		goto LINE_61;
	else
		return 1.83359;
LINE_32:
	return 2.16866;
LINE_33:
	if ( x14<1.14403e-05 )
		goto LINE_62;
	else if ( x14>=1.14403e-05 )
		goto LINE_63;
	else
		return 1.14033;
LINE_34:
	if ( x13<0.0909946 )
		goto LINE_64;
	else if ( x13>=0.0909946 )
		goto LINE_65;
	else
		return 2.17319;
LINE_35:
	if ( x7<2.04008e-06 )
		goto LINE_66;
	else if ( x7>=2.04008e-06 )
		goto LINE_67;
	else
		return 1.57981;
LINE_36:
	if ( x5<0.0881179 )
		goto LINE_68;
	else if ( x5>=0.0881179 )
		goto LINE_69;
	else
		return 1.31952;
LINE_37:
	if ( x14<0.00010339 )
		goto LINE_70;
	else if ( x14>=0.00010339 )
		goto LINE_71;
	else
		return 1.11284;
LINE_38:
	if ( x16<0.000121072 )
		goto LINE_72;
	else if ( x16>=0.000121072 )
		goto LINE_73;
	else
		return 1.49149;
LINE_39:
	return 1.87658;
LINE_40:
	if ( x16<9.48343e-10 )
		goto LINE_74;
	else if ( x16>=9.48343e-10 )
		goto LINE_75;
	else
		return 0.973748;
LINE_41:
	if ( x6<5.44261e-06 )
		goto LINE_76;
	else if ( x6>=5.44261e-06 )
		goto LINE_77;
	else
		return 1.01343;
LINE_42:
	if ( x15<8.29135e-06 )
		goto LINE_78;
	else if ( x15>=8.29135e-06 )
		goto LINE_79;
	else
		return 1.08148;
LINE_43:
	if ( x7<2.3547e-05 )
		goto LINE_80;
	else if ( x7>=2.3547e-05 )
		goto LINE_81;
	else
		return 1.02846;
LINE_44:
	return 1.30712;
LINE_45:
	if ( x6<1.11161e-05 )
		goto LINE_82;
	else if ( x6>=1.11161e-05 )
		goto LINE_83;
	else
		return 1.1546;
LINE_46:
	return 0.938988;
LINE_47:
	if ( x5<0.19501 )
		goto LINE_84;
	else if ( x5>=0.19501 )
		goto LINE_85;
	else
		return 1.06562;
LINE_48:
	if ( x14<4.94283e-06 )
		goto LINE_86;
	else if ( x14>=4.94283e-06 )
		goto LINE_87;
	else
		return 1.41558;
LINE_49:
	if ( x13<0.204705 )
		goto LINE_88;
	else if ( x13>=0.204705 )
		goto LINE_89;
	else
		return 1.57417;
LINE_50:
	if ( x6<2.45041e-05 )
		goto LINE_90;
	else if ( x6>=2.45041e-05 )
		goto LINE_91;
	else
		return 2.2908;
LINE_51:
	if ( x13<0.290494 )
		goto LINE_92;
	else if ( x13>=0.290494 )
		goto LINE_93;
	else
		return 1.59311;
LINE_52:
	return 1.35052;
LINE_53:
	if ( x8<4.33574e-09 )
		goto LINE_94;
	else if ( x8>=4.33574e-09 )
		goto LINE_95;
	else
		return 1.72722;
LINE_54:
	if ( x7<2.23784e-05 )
		goto LINE_96;
	else if ( x7>=2.23784e-05 )
		goto LINE_97;
	else
		return 1.66264;
LINE_55:
	if ( x6<1.63688e-06 )
		goto LINE_98;
	else if ( x6>=1.63688e-06 )
		goto LINE_99;
	else
		return 1.76292;
LINE_56:
	if ( x7<1.15194e-05 )
		goto LINE_100;
	else if ( x7>=1.15194e-05 )
		goto LINE_101;
	else
		return 2.21054;
LINE_57:
	if ( x15<3.56518e-08 )
		goto LINE_102;
	else if ( x15>=3.56518e-08 )
		goto LINE_103;
	else
		return 1.7516;
LINE_58:
	if ( x5<0.41381 )
		goto LINE_104;
	else if ( x5>=0.41381 )
		goto LINE_105;
	else
		return 1.99049;
LINE_59:
	if ( x13<0.0987528 )
		goto LINE_106;
	else if ( x13>=0.0987528 )
		goto LINE_107;
	else
		return 1.87359;
LINE_60:
	if ( x14<4.99691e-06 )
		goto LINE_108;
	else if ( x14>=4.99691e-06 )
		goto LINE_109;
	else
		return 1.78001;
LINE_61:
	if ( x8<4.60592e-09 )
		goto LINE_110;
	else if ( x8>=4.60592e-09 )
		goto LINE_111;
	else
		return 1.84938;
LINE_62:
	return 1.23078;
LINE_63:
	if ( x7<1.18102e-07 )
		goto LINE_112;
	else if ( x7>=1.18102e-07 )
		goto LINE_113;
	else
		return 1.11945;
LINE_64:
	if ( x7<2.28407e-05 )
		goto LINE_114;
	else if ( x7>=2.28407e-05 )
		goto LINE_115;
	else
		return 2.56336;
LINE_65:
	if ( x15<9.848e-06 )
		goto LINE_116;
	else if ( x15>=9.848e-06 )
		goto LINE_117;
	else
		return 1.97088;
LINE_66:
	return 1.20284;
LINE_67:
	if ( x8<0.000924179 )
		goto LINE_118;
	else if ( x8>=0.000924179 )
		goto LINE_119;
	else
		return 1.66059;
LINE_68:
	return 1.80611;
LINE_69:
	if ( x13<0.367868 )
		goto LINE_120;
	else if ( x13>=0.367868 )
		goto LINE_121;
	else
		return 1.29494;
LINE_70:
	if ( x5<0.174618 )
		goto LINE_122;
	else if ( x5>=0.174618 )
		goto LINE_123;
	else
		return 1.08541;
LINE_71:
	if ( x16<6.63778e-09 )
		goto LINE_124;
	else if ( x16>=6.63778e-09 )
		goto LINE_125;
	else
		return 1.35607;
LINE_72:
	if ( x13<0.279371 )
		goto LINE_126;
	else if ( x13>=0.279371 )
		goto LINE_127;
	else
		return 1.52163;
LINE_73:
	return 0.97922;
LINE_74:
	return 0.865737;
LINE_75:
	if ( x5<0.0476101 )
		goto LINE_128;
	else if ( x5>=0.0476101 )
		goto LINE_129;
	else
		return 0.977983;
LINE_76:
	return 0.928387;
LINE_77:
	if ( x13<0.12557 )
		goto LINE_130;
	else if ( x13>=0.12557 )
		goto LINE_131;
	else
		return 1.0173;
LINE_78:
	if ( x15<2.7106e-07 )
		goto LINE_132;
	else if ( x15>=2.7106e-07 )
		goto LINE_133;
	else
		return 1.03522;
LINE_79:
	if ( x13<0.310125 )
		goto LINE_134;
	else if ( x13>=0.310125 )
		goto LINE_135;
	else
		return 1.14908;
LINE_80:
	if ( x16<0.0003731 )
		goto LINE_136;
	else if ( x16>=0.0003731 )
		goto LINE_137;
	else
		return 1.03241;
LINE_81:
	return 0.866497;
LINE_82:
	return 1.21192;
LINE_83:
	if ( x5<0.146643 )
		goto LINE_138;
	else if ( x5>=0.146643 )
		goto LINE_139;
	else
		return 1.12594;
LINE_84:
	if ( x5<0.170486 )
		goto LINE_140;
	else if ( x5>=0.170486 )
		goto LINE_141;
	else
		return 1.06059;
LINE_85:
	return 1.18635;
LINE_86:
	if ( x13<0.349784 )
		goto LINE_142;
	else if ( x13>=0.349784 )
		goto LINE_143;
	else
		return 1.47767;
LINE_87:
	if ( x15<3.85747e-05 )
		goto LINE_144;
	else if ( x15>=3.85747e-05 )
		goto LINE_145;
	else
		return 1.29816;
LINE_88:
	if ( x14<3.3388e-06 )
		goto LINE_146;
	else if ( x14>=3.3388e-06 )
		goto LINE_147;
	else
		return 1.454;
LINE_89:
	if ( x13<0.351855 )
		goto LINE_148;
	else if ( x13>=0.351855 )
		goto LINE_149;
	else
		return 1.61448;
LINE_90:
	return 3.06951;
LINE_91:
	if ( x8<4.40495e-05 )
		goto LINE_150;
	else if ( x8>=4.40495e-05 )
		goto LINE_151;
	else
		return 2.2259;
LINE_92:
	if ( x13<0.192759 )
		goto LINE_152;
	else if ( x13>=0.192759 )
		goto LINE_153;
	else
		return 1.78533;
LINE_93:
	if ( x5<0.309262 )
		goto LINE_154;
	else if ( x5>=0.309262 )
		goto LINE_155;
	else
		return 1.53657;
LINE_94:
	return 1.91753;
LINE_95:
	if ( x8<2.37089e-08 )
		goto LINE_156;
	else if ( x8>=2.37089e-08 )
		goto LINE_157;
	else
		return 1.61303;
LINE_96:
	if ( x13<0.169785 )
		goto LINE_158;
	else if ( x13>=0.169785 )
		goto LINE_159;
	else
		return 1.6576;
LINE_97:
	return 2.13828;
LINE_98:
	if ( x15<7.70505e-08 )
		goto LINE_160;
	else if ( x15>=7.70505e-08 )
		goto LINE_161;
	else
		return 1.7101;
LINE_99:
	if ( x16<0.00301629 )
		goto LINE_162;
	else if ( x16>=0.00301629 )
		goto LINE_163;
	else
		return 1.77201;
LINE_100:
	if ( x13<0.221069 )
		goto LINE_164;
	else if ( x13>=0.221069 )
		goto LINE_165;
	else
		return 2.17898;
LINE_101:
	return 3.09408;
LINE_102:
	return 1.35221;
LINE_103:
	if ( x13<0.366223 )
		goto LINE_166;
	else if ( x13>=0.366223 )
		goto LINE_167;
	else
		return 1.76726;
LINE_104:
	if ( x13<0.223195 )
		goto LINE_168;
	else if ( x13>=0.223195 )
		goto LINE_169;
	else
		return 1.94721;
LINE_105:
	return 2.16358;
LINE_106:
	return 1.95046;
LINE_107:
	if ( x13<0.205962 )
		goto LINE_170;
	else if ( x13>=0.205962 )
		goto LINE_171;
	else
		return 1.85672;
LINE_108:
	if ( x7<4.3762e-08 )
		goto LINE_172;
	else if ( x7>=4.3762e-08 )
		goto LINE_173;
	else
		return 1.76024;
LINE_109:
	if ( x13<0.367919 )
		goto LINE_174;
	else if ( x13>=0.367919 )
		goto LINE_175;
	else
		return 1.82548;
LINE_110:
	if ( x5<0.417672 )
		goto LINE_176;
	else if ( x5>=0.417672 )
		goto LINE_177;
	else
		return 1.89771;
LINE_111:
	if ( x14<1.66394e-06 )
		goto LINE_178;
	else if ( x14>=1.66394e-06 )
		goto LINE_179;
	else
		return 1.83823;
LINE_112:
	return 1.14475;
LINE_113:
	return 1.07897;
LINE_114:
	return 2.72433;
LINE_115:
	return 2.27362;
LINE_116:
	return 1.57204;
LINE_117:
	if ( x5<0.123062 )
		goto LINE_180;
	else if ( x5>=0.123062 )
		goto LINE_181;
	else
		return 2.08483;
LINE_118:
	if ( x13<0.125451 )
		goto LINE_182;
	else if ( x13>=0.125451 )
		goto LINE_183;
	else
		return 1.61059;
LINE_119:
	return 1.84392;
LINE_120:
	if ( x5<0.24878 )
		goto LINE_184;
	else if ( x5>=0.24878 )
		goto LINE_185;
	else
		return 1.372;
LINE_121:
	if ( x6<0.000160401 )
		goto LINE_186;
	else if ( x6>=0.000160401 )
		goto LINE_187;
	else
		return 1.22242;
LINE_122:
	if ( x5<0.16018 )
		goto LINE_188;
	else if ( x5>=0.16018 )
		goto LINE_189;
	else
		return 1.04182;
LINE_123:
	if ( x13<0.328263 )
		goto LINE_190;
	else if ( x13>=0.328263 )
		goto LINE_191;
	else
		return 1.17983;
LINE_124:
	return 1.46255;
LINE_125:
	return 1.28508;
LINE_126:
	return 1.64539;
LINE_127:
	if ( x8<8.11619e-08 )
		goto LINE_192;
	else if ( x8>=8.11619e-08 )
		goto LINE_193;
	else
		return 1.43499;
LINE_128:
	return 0.866022;
LINE_129:
	if ( x15<4.77237e-06 )
		goto LINE_194;
	else if ( x15>=4.77237e-06 )
		goto LINE_195;
	else
		return 0.982553;
LINE_130:
	return 1.04254;
LINE_131:
	if ( x16<0.0029713 )
		goto LINE_196;
	else if ( x16>=0.0029713 )
		goto LINE_197;
	else
		return 1.0143;
LINE_132:
	return 1.0102;
LINE_133:
	if ( x16<4.68958e-08 )
		goto LINE_198;
	else if ( x16>=4.68958e-08 )
		goto LINE_199;
	else
		return 1.04677;
LINE_134:
	if ( x16<4.405e-05 )
		goto LINE_200;
	else if ( x16>=4.405e-05 )
		goto LINE_201;
	else
		return 1.16899;
LINE_135:
	return 1.08271;
LINE_136:
	return 0.937707;
LINE_137:
	if ( x15<2.18813e-05 )
		goto LINE_202;
	else if ( x15>=2.18813e-05 )
		goto LINE_203;
	else
		return 1.03989;
LINE_138:
	return 1.14673;
LINE_139:
	return 1.04277;
LINE_140:
	if ( x14<0.000450327 )
		goto LINE_204;
	else if ( x14>=0.000450327 )
		goto LINE_205;
	else
		return 1.05097;
LINE_141:
	return 1.08945;
LINE_142:
	if ( x13<0.219549 )
		goto LINE_206;
	else if ( x13>=0.219549 )
		goto LINE_207;
	else
		return 1.59154;
LINE_143:
	if ( x14<1.53223e-06 )
		goto LINE_208;
	else if ( x14>=1.53223e-06 )
		goto LINE_209;
	else
		return 1.38937;
LINE_144:
	if ( x5<0.308924 )
		goto LINE_210;
	else if ( x5>=0.308924 )
		goto LINE_211;
	else
		return 1.27892;
LINE_145:
	return 2.16371;
LINE_146:
	return 1.99941;
LINE_147:
	if ( x16<9.48586e-10 )
		goto LINE_212;
	else if ( x16>=9.48586e-10 )
		goto LINE_213;
	else
		return 1.43302;
LINE_148:
	if ( x15<7.51579e-08 )
		goto LINE_214;
	else if ( x15>=7.51579e-08 )
		goto LINE_215;
	else
		return 1.68772;
LINE_149:
	if ( x5<0.324793 )
		goto LINE_216;
	else if ( x5>=0.324793 )
		goto LINE_217;
	else
		return 1.56616;
LINE_150:
	return 2.33311;
LINE_151:
	return 2.01148;
LINE_152:
	return 1.25933;
LINE_153:
	return 1.84377;
LINE_154:
	if ( x15<5.59556e-07 )
		goto LINE_218;
	else if ( x15>=5.59556e-07 )
		goto LINE_219;
	else
		return 1.44265;
LINE_155:
	if ( x15<3.70126e-07 )
		goto LINE_220;
	else if ( x15>=3.70126e-07 )
		goto LINE_221;
	else
		return 1.64224;
LINE_156:
	return 1.44607;
LINE_157:
	return 1.68459;
LINE_158:
	if ( x5<0.358535 )
		goto LINE_222;
	else if ( x5>=0.358535 )
		goto LINE_223;
	else
		return 1.57048;
LINE_159:
	if ( x15<2.74968e-08 )
		goto LINE_224;
	else if ( x15>=2.74968e-08 )
		goto LINE_225;
	else
		return 1.67494;
LINE_160:
	if ( x13<0.307579 )
		goto LINE_226;
	else if ( x13>=0.307579 )
		goto LINE_227;
	else
		return 1.78665;
LINE_161:
	if ( x7<3.53554e-08 )
		goto LINE_228;
	else if ( x7>=3.53554e-08 )
		goto LINE_229;
	else
		return 1.67565;
LINE_162:
	if ( x5<0.373402 )
		goto LINE_230;
	else if ( x5>=0.373402 )
		goto LINE_231;
	else
		return 1.76234;
LINE_163:
	if ( x5<0.392577 )
		goto LINE_232;
	else if ( x5>=0.392577 )
		goto LINE_233;
	else
		return 1.83167;
LINE_164:
	if ( x15<2.52273e-05 )
		goto LINE_234;
	else if ( x15>=2.52273e-05 )
		goto LINE_235;
	else
		return 2.20974;
LINE_165:
	return 1.99444;
LINE_166:
	if ( x16<2.70933e-09 )
		goto LINE_236;
	else if ( x16>=2.70933e-09 )
		goto LINE_237;
	else
		return 1.82142;
LINE_167:
	if ( x14<1.60718e-06 )
		goto LINE_238;
	else if ( x14>=1.60718e-06 )
		goto LINE_239;
	else
		return 1.68989;
LINE_168:
	return 2.04854;
LINE_169:
	return 1.87483;
LINE_170:
	if ( x8<4.74419e-09 )
		goto LINE_240;
	else if ( x8>=4.74419e-09 )
		goto LINE_241;
	else
		return 1.84075;
LINE_171:
	return 1.92259;
LINE_172:
	return 1.68938;
LINE_173:
	if ( x14<1.81875e-06 )
		goto LINE_242;
	else if ( x14>=1.81875e-06 )
		goto LINE_243;
	else
		return 1.77515;
LINE_174:
	return 1.80761;
LINE_175:
	return 1.89695;
LINE_176:
	if ( x15<7.84287e-08 )
		goto LINE_244;
	else if ( x15>=7.84287e-08 )
		goto LINE_245;
	else
		return 1.88376;
LINE_177:
	return 1.95702;
LINE_178:
	if ( x13<0.294376 )
		goto LINE_246;
	else if ( x13>=0.294376 )
		goto LINE_247;
	else
		return 1.8026;
LINE_179:
	if ( x15<4.44545e-08 )
		goto LINE_248;
	else if ( x15>=4.44545e-08 )
		goto LINE_249;
	else
		return 1.85173;
LINE_180:
	return 1.78001;
LINE_181:
	if ( x7<4.81462e-05 )
		goto LINE_250;
	else if ( x7>=4.81462e-05 )
		goto LINE_251;
	else
		return 2.18009;
LINE_182:
	return 1.66247;
LINE_183:
	return 1.54833;
LINE_184:
	if ( x13<0.265367 )
		goto LINE_252;
	else if ( x13>=0.265367 )
		goto LINE_253;
	else
		return 1.32939;
LINE_185:
	if ( x16<3.84694e-08 )
		goto LINE_254;
	else if ( x16>=3.84694e-08 )
		goto LINE_255;
	else
		return 1.53392;
LINE_186:
	if ( x16<3.65895e-09 )
		goto LINE_256;
	else if ( x16>=3.65895e-09 )
		goto LINE_257;
	else
		return 1.25969;
LINE_187:
	if ( x5<0.200806 )
		goto LINE_258;
	else if ( x5>=0.200806 )
		goto LINE_259;
	else
		return 1.12394;
LINE_188:
	if ( x13<0.422879 )
		goto LINE_260;
	else if ( x13>=0.422879 )
		goto LINE_261;
	else
		return 1.03719;
LINE_189:
	if ( x13<0.345204 )
		goto LINE_262;
	else if ( x13>=0.345204 )
		goto LINE_263;
	else
		return 1.0755;
LINE_190:
	return 1.34644;
LINE_191:
	if ( x14<4.10355e-05 )
		goto LINE_264;
	else if ( x14>=4.10355e-05 )
		goto LINE_265;
	else
		return 1.16702;
LINE_192:
	return 1.48924;
LINE_193:
	return 1.3084;
LINE_194:
	if ( x7<1.995e-05 )
		goto LINE_266;
	else if ( x7>=1.995e-05 )
		goto LINE_267;
	else
		return 0.988871;
LINE_195:
	return 0.926956;
LINE_196:
	if ( x16<0.00147108 )
		goto LINE_268;
	else if ( x16>=0.00147108 )
		goto LINE_269;
	else
		return 1.01633;
LINE_197:
	return 0.896906;
LINE_198:
	if ( x13<0.228961 )
		goto LINE_270;
	else if ( x13>=0.228961 )
		goto LINE_271;
	else
		return 1.05088;
LINE_199:
	return 1.02419;
LINE_200:
	return 1.17552;
LINE_201:
	return 1.11028;
LINE_202:
	if ( x14<4.66298e-05 )
		goto LINE_272;
	else if ( x14>=4.66298e-05 )
		goto LINE_273;
	else
		return 1.03429;
LINE_203:
	return 1.14061;
LINE_204:
	if ( x7<1.0457e-05 )
		goto LINE_274;
	else if ( x7>=1.0457e-05 )
		goto LINE_275;
	else
		return 1.0473;
LINE_205:
	return 1.11341;
LINE_206:
	return 2.101;
LINE_207:
	if ( x14<1.54612e-06 )
		goto LINE_276;
	else if ( x14>=1.54612e-06 )
		goto LINE_277;
	else
		return 1.56324;
LINE_208:
	return 1.57865;
LINE_209:
	if ( x5<0.295726 )
		goto LINE_278;
	else if ( x5>=0.295726 )
		goto LINE_279;
	else
		return 1.38131;
LINE_210:
	if ( x15<1.64706e-05 )
		goto LINE_280;
	else if ( x15>=1.64706e-05 )
		goto LINE_281;
	else
		return 1.29015;
LINE_211:
	return 0.784851;
LINE_212:
	return 2.01062;
LINE_213:
	if ( x5<0.339505 )
		goto LINE_282;
	else if ( x5>=0.339505 )
		goto LINE_283;
	else
		return 1.42169;
LINE_214:
	if ( x13<0.254627 )
		goto LINE_284;
	else if ( x13>=0.254627 )
		goto LINE_285;
	else
		return 1.75728;
LINE_215:
	if ( x5<0.317781 )
		goto LINE_286;
	else if ( x5>=0.317781 )
		goto LINE_287;
	else
		return 1.62238;
LINE_216:
	if ( x14<1.63497e-06 )
		goto LINE_288;
	else if ( x14>=1.63497e-06 )
		goto LINE_289;
	else
		return 1.66024;
LINE_217:
	if ( x5<0.328322 )
		goto LINE_290;
	else if ( x5>=0.328322 )
		goto LINE_291;
	else
		return 1.55029;
LINE_218:
	if ( x5<0.291161 )
		goto LINE_292;
	else if ( x5>=0.291161 )
		goto LINE_293;
	else
		return 1.41314;
LINE_219:
	return 1.54595;
LINE_220:
	if ( x6<2.64414e-05 )
		goto LINE_294;
	else if ( x6>=2.64414e-05 )
		goto LINE_295;
	else
		return 1.63239;
LINE_221:
	return 1.79;
LINE_222:
	if ( x16<0.00247923 )
		goto LINE_296;
	else if ( x16>=0.00247923 )
		goto LINE_297;
	else
		return 1.49109;
LINE_223:
	if ( x16<0.00313889 )
		goto LINE_298;
	else if ( x16>=0.00313889 )
		goto LINE_299;
	else
		return 1.69839;
LINE_224:
	return 1.28119;
LINE_225:
	if ( x7<2.04373e-08 )
		goto LINE_300;
	else if ( x7>=2.04373e-08 )
		goto LINE_301;
	else
		return 1.67831;
LINE_226:
	return 1.99518;
LINE_227:
	if ( x7<7.0349e-08 )
		goto LINE_302;
	else if ( x7>=7.0349e-08 )
		goto LINE_303;
	else
		return 1.74495;
LINE_228:
	return 1.7745;
LINE_229:
	if ( x13<0.35458 )
		goto LINE_304;
	else if ( x13>=0.35458 )
		goto LINE_305;
	else
		return 1.65821;
LINE_230:
	if ( x6<1.74698e-06 )
		goto LINE_306;
	else if ( x6>=1.74698e-06 )
		goto LINE_307;
	else
		return 1.71071;
LINE_231:
	if ( x14<1.46892e-06 )
		goto LINE_308;
	else if ( x14>=1.46892e-06 )
		goto LINE_309;
	else
		return 1.77158;
LINE_232:
	if ( x6<1.68088e-06 )
		goto LINE_310;
	else if ( x6>=1.68088e-06 )
		goto LINE_311;
	else
		return 1.80909;
LINE_233:
	if ( x8<2.30337e-09 )
		goto LINE_312;
	else if ( x8>=2.30337e-09 )
		goto LINE_313;
	else
		return 1.9152;
LINE_234:
	if ( x16<0.00360604 )
		goto LINE_314;
	else if ( x16>=0.00360604 )
		goto LINE_315;
	else
		return 2.24598;
LINE_235:
	return 2.10102;
LINE_236:
	return 2.0403;
LINE_237:
	if ( x6<0.000849622 )
		goto LINE_316;
	else if ( x6>=0.000849622 )
		goto LINE_317;
	else
		return 1.80578;
LINE_238:
	return 1.44063;
LINE_239:
	if ( x6<0.0005079 )
		goto LINE_318;
	else if ( x6>=0.0005079 )
		goto LINE_319;
	else
		return 1.71613;
LINE_240:
	return 1.8892;
LINE_241:
	if ( x14<1.44186e-05 )
		goto LINE_320;
	else if ( x14>=1.44186e-05 )
		goto LINE_321;
	else
		return 1.8321;
LINE_242:
	if ( x13<0.331733 )
		goto LINE_322;
	else if ( x13>=0.331733 )
		goto LINE_323;
	else
		return 1.81221;
LINE_243:
	return 1.73397;
LINE_244:
	return 1.86324;
LINE_245:
	return 1.90684;
LINE_246:
	return 1.89242;
LINE_247:
	if ( x13<0.333018 )
		goto LINE_324;
	else if ( x13>=0.333018 )
		goto LINE_325;
	else
		return 1.79035;
LINE_248:
	return 1.77112;
LINE_249:
	if ( x15<8.31941e-08 )
		goto LINE_326;
	else if ( x15>=8.31941e-08 )
		goto LINE_327;
	else
		return 1.85693;
LINE_250:
	if ( x8<1.99175e-08 )
		goto LINE_328;
	else if ( x8>=1.99175e-08 )
		goto LINE_329;
	else
		return 2.20783;
LINE_251:
	return 1.76391;
LINE_252:
	return 1.58064;
LINE_253:
	if ( x6<0.000271725 )
		goto LINE_330;
	else if ( x6>=0.000271725 )
		goto LINE_331;
	else
		return 1.28228;
LINE_254:
	return 1.66944;
LINE_255:
	return 1.39839;
LINE_256:
	return 1.44911;
LINE_257:
	if ( x5<0.246862 )
		goto LINE_332;
	else if ( x5>=0.246862 )
		goto LINE_333;
	else
		return 1.24297;
LINE_258:
	return 1.05196;
LINE_259:
	return 1.17792;
LINE_260:
	if ( x13<0.39481 )
		goto LINE_334;
	else if ( x13>=0.39481 )
		goto LINE_335;
	else
		return 1.03599;
LINE_261:
	return 1.13262;
LINE_262:
	return 1.02255;
LINE_263:
	return 1.10575;
LINE_264:
	if ( x5<0.232607 )
		goto LINE_336;
	else if ( x5>=0.232607 )
		goto LINE_337;
	else
		return 1.16098;
LINE_265:
	return 1.39657;
LINE_266:
	if ( x14<1.74261e-06 )
		goto LINE_338;
	else if ( x14>=1.74261e-06 )
		goto LINE_339;
	else
		return 0.991747;
LINE_267:
	return 0.8652;
LINE_268:
	if ( x5<0.0741164 )
		goto LINE_340;
	else if ( x5>=0.0741164 )
		goto LINE_341;
	else
		return 1.01552;
LINE_269:
	return 1.06233;
LINE_270:
	return 1.06152;
LINE_271:
	return 1.04201;
LINE_272:
	if ( x16<0.000952252 )
		goto LINE_342;
	else if ( x16>=0.000952252 )
		goto LINE_343;
	else
		return 1.0435;
LINE_273:
	return 0.988259;
LINE_274:
	return 1.00222;
LINE_275:
	if ( x5<0.13815 )
		goto LINE_344;
	else if ( x5>=0.13815 )
		goto LINE_345;
	else
		return 1.05012;
LINE_276:
	return 1.7019;
LINE_277:
	if ( x6<1.44543e-06 )
		goto LINE_346;
	else if ( x6>=1.44543e-06 )
		goto LINE_347;
	else
		return 1.52362;
LINE_278:
	if ( x7<5.70169e-08 )
		goto LINE_348;
	else if ( x7>=5.70169e-08 )
		goto LINE_349;
	else
		return 1.32889;
LINE_279:
	if ( x5<0.302121 )
		goto LINE_350;
	else if ( x5>=0.302121 )
		goto LINE_351;
	else
		return 1.41385;
LINE_280:
	if ( x13<0.210175 )
		goto LINE_352;
	else if ( x13>=0.210175 )
		goto LINE_353;
	else
		return 1.33724;
LINE_281:
	if ( x6<1.9207e-06 )
		goto LINE_354;
	else if ( x6>=1.9207e-06 )
		goto LINE_355;
	else
		return 1.16459;
LINE_282:
	if ( x15<9.09138e-06 )
		goto LINE_356;
	else if ( x15>=9.09138e-06 )
		goto LINE_357;
	else
		return 1.3524;
LINE_283:
	if ( x16<0.00185747 )
		goto LINE_358;
	else if ( x16>=0.00185747 )
		goto LINE_359;
	else
		return 1.4664;
LINE_284:
	return 2.13617;
LINE_285:
	if ( x16<1.61157e-08 )
		goto LINE_360;
	else if ( x16>=1.61157e-08 )
		goto LINE_361;
	else
		return 1.71668;
LINE_286:
	return 2.06586;
LINE_287:
	if ( x14<1.99998e-06 )
		goto LINE_362;
	else if ( x14>=1.99998e-06 )
		goto LINE_363;
	else
		return 1.60852;
LINE_288:
	return 1.47207;
LINE_289:
	if ( x8<2.71161e-09 )
		goto LINE_364;
	else if ( x8>=2.71161e-09 )
		goto LINE_365;
	else
		return 1.67471;
LINE_290:
	return 1.42527;
LINE_291:
	if ( x16<1.61173e-08 )
		goto LINE_366;
	else if ( x16>=1.61173e-08 )
		goto LINE_367;
	else
		return 1.5583;
LINE_292:
	return 1.36585;
LINE_293:
	return 1.47619;
LINE_294:
	return 1.66436;
LINE_295:
	return 1.61107;
LINE_296:
	if ( x13<0.115451 )
		goto LINE_368;
	else if ( x13>=0.115451 )
		goto LINE_369;
	else
		return 1.36569;
LINE_297:
	if ( x13<0.0909092 )
		goto LINE_370;
	else if ( x13>=0.0909092 )
		goto LINE_371;
	else
		return 1.55708;
LINE_298:
	return 1.60414;
LINE_299:
	if ( x6<2.02502e-05 )
		goto LINE_372;
	else if ( x6>=2.02502e-05 )
		goto LINE_373;
	else
		return 1.7738;
LINE_300:
	return 1.99512;
LINE_301:
	if ( x7<7.14315e-08 )
		goto LINE_374;
	else if ( x7>=7.14315e-08 )
		goto LINE_375;
	else
		return 1.67558;
LINE_302:
	return 1.78085;
LINE_303:
	return 1.69109;
LINE_304:
	if ( x15<9.51423e-08 )
		goto LINE_376;
	else if ( x15>=9.51423e-08 )
		goto LINE_377;
	else
		return 1.62125;
LINE_305:
	if ( x8<8.67222e-09 )
		goto LINE_378;
	else if ( x8>=8.67222e-09 )
		goto LINE_379;
	else
		return 1.73549;
LINE_306:
	return 1.4822;
LINE_307:
	if ( x16<1.59528e-07 )
		goto LINE_380;
	else if ( x16>=1.59528e-07 )
		goto LINE_381;
	else
		return 1.72159;
LINE_308:
	if ( x5<0.376082 )
		goto LINE_382;
	else if ( x5>=0.376082 )
		goto LINE_383;
	else
		return 1.85574;
LINE_309:
	if ( x8<2.03564e-07 )
		goto LINE_384;
	else if ( x8>=2.03564e-07 )
		goto LINE_385;
	else
		return 1.76533;
LINE_310:
	return 1.94012;
LINE_311:
	if ( x6<1.91092e-06 )
		goto LINE_386;
	else if ( x6>=1.91092e-06 )
		goto LINE_387;
	else
		return 1.8016;
LINE_312:
	return 1.98295;
LINE_313:
	return 1.89827;
LINE_314:
	if ( x5<0.356005 )
		goto LINE_388;
	else if ( x5>=0.356005 )
		goto LINE_389;
	else
		return 2.29549;
LINE_315:
	return 2.11727;
LINE_316:
	if ( x15<5.0857e-08 )
		goto LINE_390;
	else if ( x15>=5.0857e-08 )
		goto LINE_391;
	else
		return 1.79475;
LINE_317:
	return 2.10375;
LINE_318:
	return 1.75979;
LINE_319:
	if ( x16<1.2563e-07 )
		goto LINE_392;
	else if ( x16>=1.2563e-07 )
		goto LINE_393;
	else
		return 1.69066;
LINE_320:
	return 1.86317;
LINE_321:
	if ( x16<5.01427e-09 )
		goto LINE_394;
	else if ( x16>=5.01427e-09 )
		goto LINE_395;
	else
		return 1.82534;
LINE_322:
	return 1.777;
LINE_323:
	return 1.83569;
LINE_324:
	return 1.71478;
LINE_325:
	if ( x7<1.51549e-07 )
		goto LINE_396;
	else if ( x7>=1.51549e-07 )
		goto LINE_397;
	else
		return 1.80714;
LINE_326:
	if ( x16<2.9804e-09 )
		goto LINE_398;
	else if ( x16>=2.9804e-09 )
		goto LINE_399;
	else
		return 1.8815;
LINE_327:
	if ( x13<0.287747 )
		goto LINE_400;
	else if ( x13>=0.287747 )
		goto LINE_401;
	else
		return 1.84243;
LINE_328:
	return 2.06745;
LINE_329:
	return 2.33067;
LINE_330:
	if ( x13<0.366643 )
		goto LINE_402;
	else if ( x13>=0.366643 )
		goto LINE_403;
	else
		return 1.26049;
LINE_331:
	return 1.60908;
LINE_332:
	if ( x7<3.5073e-07 )
		goto LINE_404;
	else if ( x7>=3.5073e-07 )
		goto LINE_405;
	else
		return 1.20739;
LINE_333:
	if ( x16<1.57272e-07 )
		goto LINE_406;
	else if ( x16>=1.57272e-07 )
		goto LINE_407;
	else
		return 1.28301;
LINE_334:
	if ( x15<1.66074e-07 )
		goto LINE_408;
	else if ( x15>=1.66074e-07 )
		goto LINE_409;
	else
		return 1.03228;
LINE_335:
	if ( x6<9.49691e-05 )
		goto LINE_410;
	else if ( x6>=9.49691e-05 )
		goto LINE_411;
	else
		return 1.04768;
LINE_336:
	if ( x7<5.31014e-05 )
		goto LINE_412;
	else if ( x7>=5.31014e-05 )
		goto LINE_413;
	else
		return 1.15722;
LINE_337:
	return 1.22865;
LINE_338:
	if ( x14<1.70265e-06 )
		goto LINE_414;
	else if ( x14>=1.70265e-06 )
		goto LINE_415;
	else
		return 0.968645;
LINE_339:
	if ( x16<2.62414e-07 )
		goto LINE_416;
	else if ( x16>=2.62414e-07 )
		goto LINE_417;
	else
		return 1.01184;
LINE_340:
	if ( x7<5.26299e-07 )
		goto LINE_418;
	else if ( x7>=5.26299e-07 )
		goto LINE_419;
	else
		return 1.01242;
LINE_341:
	if ( x14<2.55261e-06 )
		goto LINE_420;
	else if ( x14>=2.55261e-06 )
		goto LINE_421;
	else
		return 1.02421;
LINE_342:
	if ( x7<1.57861e-05 )
		goto LINE_422;
	else if ( x7>=1.57861e-05 )
		goto LINE_423;
	else
		return 1.02371;
LINE_343:
	if ( x5<0.0530431 )
		goto LINE_424;
	else if ( x5>=0.0530431 )
		goto LINE_425;
	else
		return 1.06938;
LINE_344:
	return 1.04525;
LINE_345:
	return 1.05498;
LINE_346:
	return 1.69004;
LINE_347:
	if ( x8<1.44926e-08 )
		goto LINE_426;
	else if ( x8>=1.44926e-08 )
		goto LINE_427;
	else
		return 1.48744;
LINE_348:
	return 1.27286;
LINE_349:
	if ( x15<1.58087e-07 )
		goto LINE_428;
	else if ( x15>=1.58087e-07 )
		goto LINE_429;
	else
		return 1.36455;
LINE_350:
	if ( x5<0.296769 )
		goto LINE_430;
	else if ( x5>=0.296769 )
		goto LINE_431;
	else
		return 1.48592;
LINE_351:
	if ( x8<7.33229e-08 )
		goto LINE_432;
	else if ( x8>=7.33229e-08 )
		goto LINE_433;
	else
		return 1.37591;
LINE_352:
	if ( x5<0.293547 )
		goto LINE_434;
	else if ( x5>=0.293547 )
		goto LINE_435;
	else
		return 1.28316;
LINE_353:
	if ( x16<0.000941833 )
		goto LINE_436;
	else if ( x16>=0.000941833 )
		goto LINE_437;
	else
		return 1.36968;
LINE_354:
	return 1.1876;
LINE_355:
	return 1.13237;
LINE_356:
	return 1.40875;
LINE_357:
	if ( x8<5.00755e-09 )
		goto LINE_438;
	else if ( x8>=5.00755e-09 )
		goto LINE_439;
	else
		return 1.30629;
LINE_358:
	if ( x16<1.26126e-07 )
		goto LINE_440;
	else if ( x16>=1.26126e-07 )
		goto LINE_441;
	else
		return 1.42196;
LINE_359:
	if ( x6<4.14124e-05 )
		goto LINE_442;
	else if ( x6>=4.14124e-05 )
		goto LINE_443;
	else
		return 1.51381;
LINE_360:
	if ( x5<0.341385 )
		goto LINE_444;
	else if ( x5>=0.341385 )
		goto LINE_445;
	else
		return 1.79042;
LINE_361:
	if ( x15<6.29165e-08 )
		goto LINE_446;
	else if ( x15>=6.29165e-08 )
		goto LINE_447;
	else
		return 1.66138;
LINE_362:
	return 1.74153;
LINE_363:
	if ( x16<0.000949255 )
		goto LINE_448;
	else if ( x16>=0.000949255 )
		goto LINE_449;
	else
		return 1.56418;
LINE_364:
	return 1.81264;
LINE_365:
	if ( x8<2.83119e-08 )
		goto LINE_450;
	else if ( x8>=2.83119e-08 )
		goto LINE_451;
	else
		return 1.66322;
LINE_366:
	if ( x5<0.341012 )
		goto LINE_452;
	else if ( x5>=0.341012 )
		goto LINE_453;
	else
		return 1.51701;
LINE_367:
	if ( x16<9.25687e-08 )
		goto LINE_454;
	else if ( x16>=9.25687e-08 )
		goto LINE_455;
	else
		return 1.57778;
LINE_368:
	return 1.29055;
LINE_369:
	return 1.41579;
LINE_370:
	if ( x13<0.0674699 )
		goto LINE_456;
	else if ( x13>=0.0674699 )
		goto LINE_457;
	else
		return 1.50833;
LINE_371:
	return 1.62412;
LINE_372:
	return 1.75036;
LINE_373:
	return 1.86756;
LINE_374:
	if ( x7<5.03401e-08 )
		goto LINE_458;
	else if ( x7>=5.03401e-08 )
		goto LINE_459;
	else
		return 1.64426;
LINE_375:
	if ( x8<1.40891e-08 )
		goto LINE_460;
	else if ( x8>=1.40891e-08 )
		goto LINE_461;
	else
		return 1.70333;
LINE_376:
	return 1.29213;
LINE_377:
	if ( x13<0.157433 )
		goto LINE_462;
	else if ( x13>=0.157433 )
		goto LINE_463;
	else
		return 1.63621;
LINE_378:
	return 1.78157;
LINE_379:
	return 1.71821;
LINE_380:
	if ( x15<4.00614e-08 )
		goto LINE_464;
	else if ( x15>=4.00614e-08 )
		goto LINE_465;
	else
		return 1.70343;
LINE_381:
	if ( x5<0.368589 )
		goto LINE_466;
	else if ( x5>=0.368589 )
		goto LINE_467;
	else
		return 1.76211;
LINE_382:
	return 2.0719;
LINE_383:
	if ( x8<0.000948221 )
		goto LINE_468;
	else if ( x8>=0.000948221 )
		goto LINE_469;
	else
		return 1.78923;
LINE_384:
	if ( x15<1.98865e-06 )
		goto LINE_470;
	else if ( x15>=1.98865e-06 )
		goto LINE_471;
	else
		return 1.75784;
LINE_385:
	if ( x7<8.50232e-08 )
		goto LINE_472;
	else if ( x7>=8.50232e-08 )
		goto LINE_473;
	else
		return 1.79355;
LINE_386:
	if ( x7<8.2755e-08 )
		goto LINE_474;
	else if ( x7>=8.2755e-08 )
		goto LINE_475;
	else
		return 1.75454;
LINE_387:
	if ( x14<6.59438e-06 )
		goto LINE_476;
	else if ( x14>=6.59438e-06 )
		goto LINE_477;
	else
		return 1.83298;
LINE_388:
	return 2.23038;
LINE_389:
	return 2.3513;
LINE_390:
	return 2.07837;
LINE_391:
	if ( x5<0.352693 )
		goto LINE_478;
	else if ( x5>=0.352693 )
		goto LINE_479;
	else
		return 1.78384;
LINE_392:
	return 1.67009;
LINE_393:
	return 1.73181;
LINE_394:
	return 1.8691;
LINE_395:
	if ( x14<0.000189396 )
		goto LINE_480;
	else if ( x14>=0.000189396 )
		goto LINE_481;
	else
		return 1.81878;
LINE_396:
	if ( x14<1.19499e-06 )
		goto LINE_482;
	else if ( x14>=1.19499e-06 )
		goto LINE_483;
	else
		return 1.80034;
LINE_397:
	return 1.92274;
LINE_398:
	return 1.85624;
LINE_399:
	if ( x6<2.63499e-06 )
		goto LINE_484;
	else if ( x6>=2.63499e-06 )
		goto LINE_485;
	else
		return 1.89774;
LINE_400:
	return 1.78656;
LINE_401:
	if ( x8<1.72041e-08 )
		goto LINE_486;
	else if ( x8>=1.72041e-08 )
		goto LINE_487;
	else
		return 1.85065;
LINE_402:
	if ( x6<0.00010435 )
		goto LINE_488;
	else if ( x6>=0.00010435 )
		goto LINE_489;
	else
		return 1.24444;
LINE_403:
	return 1.72598;
LINE_404:
	if ( x7<6.39772e-08 )
		goto LINE_490;
	else if ( x7>=6.39772e-08 )
		goto LINE_491;
	else
		return 1.22209;
LINE_405:
	return 1.08977;
LINE_406:
	if ( x5<0.252716 )
		goto LINE_492;
	else if ( x5>=0.252716 )
		goto LINE_493;
	else
		return 1.26942;
LINE_407:
	return 1.3419;
LINE_408:
	if ( x6<5.49404e-05 )
		goto LINE_494;
	else if ( x6>=5.49404e-05 )
		goto LINE_495;
	else
		return 1.02784;
LINE_409:
	if ( x5<0.115881 )
		goto LINE_496;
	else if ( x5>=0.115881 )
		goto LINE_497;
	else
		return 1.04688;
LINE_410:
	if ( x5<0.147456 )
		goto LINE_498;
	else if ( x5>=0.147456 )
		goto LINE_499;
	else
		return 1.04565;
LINE_411:
	return 1.0843;
LINE_412:
	if ( x8<1.55798e-07 )
		goto LINE_500;
	else if ( x8>=1.55798e-07 )
		goto LINE_501;
	else
		return 1.17147;
LINE_413:
	if ( x7<5.6793e-05 )
		goto LINE_502;
	else if ( x7>=5.6793e-05 )
		goto LINE_503;
	else
		return 1.14297;
LINE_414:
	if ( x14<1.32717e-06 )
		goto LINE_504;
	else if ( x14>=1.32717e-06 )
		goto LINE_505;
	else
		return 0.991741;
LINE_415:
	return 0.899355;
LINE_416:
	if ( x5<0.047746 )
		goto LINE_506;
	else if ( x5>=0.047746 )
		goto LINE_507;
	else
		return 1.00875;
LINE_417:
	return 1.02648;
LINE_418:
	return 1.02343;
LINE_419:
	if ( x16<4.04926e-08 )
		goto LINE_508;
	else if ( x16>=4.04926e-08 )
		goto LINE_509;
	else
		return 1.01093;
LINE_420:
	if ( x16<1.62569e-09 )
		goto LINE_510;
	else if ( x16>=1.62569e-09 )
		goto LINE_511;
	else
		return 1.02289;
LINE_421:
	return 1.03282;
LINE_422:
	if ( x8<0.00353741 )
		goto LINE_512;
	else if ( x8>=0.00353741 )
		goto LINE_513;
	else
		return 1.01926;
LINE_423:
	return 1.03186;
LINE_424:
	return 1.02807;
LINE_425:
	if ( x8<0.00351149 )
		goto LINE_514;
	else if ( x8>=0.00351149 )
		goto LINE_515;
	else
		return 1.08178;
LINE_426:
	return 1.38524;
LINE_427:
	if ( x14<1.94707e-06 )
		goto LINE_516;
	else if ( x14>=1.94707e-06 )
		goto LINE_517;
	else
		return 1.55314;
LINE_428:
	return 1.40639;
LINE_429:
	return 1.31435;
LINE_430:
	return 1.41969;
LINE_431:
	return 1.58527;
LINE_432:
	if ( x16<6.63782e-09 )
		goto LINE_518;
	else if ( x16>=6.63782e-09 )
		goto LINE_519;
	else
		return 1.34877;
LINE_433:
	return 1.43472;
LINE_434:
	return 1.21662;
LINE_435:
	return 1.31643;
LINE_436:
	if ( x14<3.99819e-05 )
		goto LINE_520;
	else if ( x14>=3.99819e-05 )
		goto LINE_521;
	else
		return 1.32465;
LINE_437:
	return 1.54981;
LINE_438:
	return 1.40313;
LINE_439:
	return 1.26997;
LINE_440:
	if ( x14<5.91529e-05 )
		goto LINE_522;
	else if ( x14>=5.91529e-05 )
		goto LINE_523;
	else
		return 1.46022;
LINE_441:
	return 1.33778;
LINE_442:
	if ( x15<2.11411e-05 )
		goto LINE_524;
	else if ( x15>=2.11411e-05 )
		goto LINE_525;
	else
		return 1.50069;
LINE_443:
	return 1.69755;
LINE_444:
	if ( x8<4.06521e-09 )
		goto LINE_526;
	else if ( x8>=4.06521e-09 )
		goto LINE_527;
	else
		return 1.73495;
LINE_445:
	return 2.06777;
LINE_446:
	if ( x16<1.89078e-07 )
		goto LINE_528;
	else if ( x16>=1.89078e-07 )
		goto LINE_529;
	else
		return 1.62257;
LINE_447:
	return 1.74677;
LINE_448:
	if ( x6<1.5417e-06 )
		goto LINE_530;
	else if ( x6>=1.5417e-06 )
		goto LINE_531;
	else
		return 1.53701;
LINE_449:
	return 1.863;
LINE_450:
	return 1.62381;
LINE_451:
	return 1.68292;
LINE_452:
	if ( x5<0.331359 )
		goto LINE_532;
	else if ( x5>=0.331359 )
		goto LINE_533;
	else
		return 1.47727;
LINE_453:
	if ( x5<0.344609 )
		goto LINE_534;
	else if ( x5>=0.344609 )
		goto LINE_535;
	else
		return 1.56759;
LINE_454:
	if ( x5<0.330322 )
		goto LINE_536;
	else if ( x5>=0.330322 )
		goto LINE_537;
	else
		return 1.614;
LINE_455:
	if ( x6<1.75736e-06 )
		goto LINE_538;
	else if ( x6>=1.75736e-06 )
		goto LINE_539;
	else
		return 1.5478;
LINE_456:
	return 1.49492;
LINE_457:
	return 1.54408;
LINE_458:
	if ( x7<4.06579e-08 )
		goto LINE_540;
	else if ( x7>=4.06579e-08 )
		goto LINE_541;
	else
		return 1.67946;
LINE_459:
	if ( x7<5.85188e-08 )
		goto LINE_542;
	else if ( x7>=5.85188e-08 )
		goto LINE_543;
	else
		return 1.61216;
LINE_460:
	if ( x16<1.5842e-08 )
		goto LINE_544;
	else if ( x16>=1.5842e-08 )
		goto LINE_545;
	else
		return 1.76432;
LINE_461:
	if ( x13<0.37589 )
		goto LINE_546;
	else if ( x13>=0.37589 )
		goto LINE_547;
	else
		return 1.68097;
LINE_462:
	return 1.57908;
LINE_463:
	if ( x7<4.01007e-08 )
		goto LINE_548;
	else if ( x7>=4.01007e-08 )
		goto LINE_549;
	else
		return 1.67576;
LINE_464:
	return 1.7692;
LINE_465:
	if ( x8<0.000943725 )
		goto LINE_550;
	else if ( x8>=0.000943725 )
		goto LINE_551;
	else
		return 1.6929;
LINE_466:
	return 1.81641;
LINE_467:
	if ( x14<3.82268e-05 )
		goto LINE_552;
	else if ( x14>=3.82268e-05 )
		goto LINE_553;
	else
		return 1.75224;
LINE_468:
	if ( x5<0.381247 )
		goto LINE_554;
	else if ( x5>=0.381247 )
		goto LINE_555;
	else
		return 1.77255;
LINE_469:
	return 1.98933;
LINE_470:
	if ( x13<0.348193 )
		goto LINE_556;
	else if ( x13>=0.348193 )
		goto LINE_557;
	else
		return 1.76819;
LINE_471:
	if ( x15<2.02037e-06 )
		goto LINE_558;
	else if ( x15>=2.02037e-06 )
		goto LINE_559;
	else
		return 1.72463;
LINE_472:
	return 1.91619;
LINE_473:
	if ( x5<0.373701 )
		goto LINE_560;
	else if ( x5>=0.373701 )
		goto LINE_561;
	else
		return 1.7824;
LINE_474:
	return 1.82353;
LINE_475:
	return 1.7028;
LINE_476:
	return 1.73794;
LINE_477:
	if ( x13<0.0657544 )
		goto LINE_562;
	else if ( x13>=0.0657544 )
		goto LINE_563;
	else
		return 1.84882;
LINE_478:
	return 1.70172;
LINE_479:
	if ( x13<0.244529 )
		goto LINE_564;
	else if ( x13>=0.244529 )
		goto LINE_565;
	else
		return 1.80339;
LINE_480:
	if ( x15<4.50217e-05 )
		goto LINE_566;
	else if ( x15>=4.50217e-05 )
		goto LINE_567;
	else
		return 1.82194;
LINE_481:
	return 1.75884;
LINE_482:
	return 1.90233;
LINE_483:
	if ( x5<0.414126 )
		goto LINE_568;
	else if ( x5>=0.414126 )
		goto LINE_569;
	else
		return 1.79397;
LINE_484:
	return 1.8801;
LINE_485:
	return 1.9295;
LINE_486:
	return 1.80952;
LINE_487:
	if ( x5<0.407106 )
		goto LINE_570;
	else if ( x5>=0.407106 )
		goto LINE_571;
	else
		return 1.86131;
LINE_488:
	if ( x5<0.182088 )
		goto LINE_572;
	else if ( x5>=0.182088 )
		goto LINE_573;
	else
		return 1.32099;
LINE_489:
	if ( x5<0.205342 )
		goto LINE_574;
	else if ( x5>=0.205342 )
		goto LINE_575;
	else
		return 1.13599;
LINE_490:
	return 1.17948;
LINE_491:
	if ( x13<0.372749 )
		goto LINE_576;
	else if ( x13>=0.372749 )
		goto LINE_577;
	else
		return 1.24765;
LINE_492:
	if ( x6<1.56764e-06 )
		goto LINE_578;
	else if ( x6>=1.56764e-06 )
		goto LINE_579;
	else
		return 1.28396;
LINE_493:
	return 1.18943;
LINE_494:
	if ( x6<1.60411e-05 )
		goto LINE_580;
	else if ( x6>=1.60411e-05 )
		goto LINE_581;
	else
		return 1.03131;
LINE_495:
	return 0.991423;
LINE_496:
	return 1.00139;
LINE_497:
	if ( x13<0.345104 )
		goto LINE_582;
	else if ( x13>=0.345104 )
		goto LINE_583;
	else
		return 1.05038;
LINE_498:
	if ( x8<0.000984794 )
		goto LINE_584;
	else if ( x8>=0.000984794 )
		goto LINE_585;
	else
		return 1.03802;
LINE_499:
	return 1.05764;
LINE_500:
	if ( x5<0.232138 )
		goto LINE_586;
	else if ( x5>=0.232138 )
		goto LINE_587;
	else
		return 1.18296;
LINE_501:
	return 1.14158;
LINE_502:
	return 1.10905;
LINE_503:
	if ( x8<3.25137e-09 )
		goto LINE_588;
	else if ( x8>=3.25137e-09 )
		goto LINE_589;
	else
		return 1.14975;
LINE_504:
	return 0.933518;
LINE_505:
	if ( x7<5.52629e-06 )
		goto LINE_590;
	else if ( x7>=5.52629e-06 )
		goto LINE_591;
	else
		return 1.0007;
LINE_506:
	return 0.985258;
LINE_507:
	if ( x5<0.108289 )
		goto LINE_592;
	else if ( x5>=0.108289 )
		goto LINE_593;
	else
		return 1.01006;
LINE_508:
	if ( x15<3.97001e-08 )
		goto LINE_594;
	else if ( x15>=3.97001e-08 )
		goto LINE_595;
	else
		return 1.00712;
LINE_509:
	if ( x16<2.87935e-07 )
		goto LINE_596;
	else if ( x16>=2.87935e-07 )
		goto LINE_597;
	else
		return 1.01495;
LINE_510:
	return 1.03071;
LINE_511:
	return 1.02146;
LINE_512:
	return 1.00797;
LINE_513:
	return 1.0235;
LINE_514:
	return 1.05373;
LINE_515:
	return 1.10047;
LINE_516:
	if ( x15<9.52449e-08 )
		goto LINE_598;
	else if ( x15>=9.52449e-08 )
		goto LINE_599;
	else
		return 1.49827;
LINE_517:
	return 1.69032;
LINE_518:
	return 1.37217;
LINE_519:
	return 1.32871;
LINE_520:
	return 1.37714;
LINE_521:
	return 1.28383;
LINE_522:
	return 1.48765;
LINE_523:
	return 1.33675;
LINE_524:
	if ( x13<0.0745319 )
		goto LINE_600;
	else if ( x13>=0.0745319 )
		goto LINE_601;
	else
		return 1.48607;
LINE_525:
	return 1.69071;
LINE_526:
	return 1.53202;
LINE_527:
	return 1.78568;
LINE_528:
	return 1.64529;
LINE_529:
	return 1.52031;
LINE_530:
	return 1.43364;
LINE_531:
	if ( x13<0.237764 )
		goto LINE_602;
	else if ( x13>=0.237764 )
		goto LINE_603;
	else
		return 1.57578;
LINE_532:
	return 1.55556;
LINE_533:
	if ( x8<1.12136e-07 )
		goto LINE_604;
	else if ( x8>=1.12136e-07 )
		goto LINE_605;
	else
		return 1.46423;
LINE_534:
	return 1.5966;
LINE_535:
	return 1.51682;
LINE_536:
	return 1.45667;
LINE_537:
	if ( x13<0.355282 )
		goto LINE_606;
	else if ( x13>=0.355282 )
		goto LINE_607;
	else
		return 1.6283;
LINE_538:
	if ( x15<5.01737e-08 )
		goto LINE_608;
	else if ( x15>=5.01737e-08 )
		goto LINE_609;
	else
		return 1.51825;
LINE_539:
	if ( x13<0.369627 )
		goto LINE_610;
	else if ( x13>=0.369627 )
		goto LINE_611;
	else
		return 1.58416;
LINE_540:
	if ( x5<0.354024 )
		goto LINE_612;
	else if ( x5>=0.354024 )
		goto LINE_613;
	else
		return 1.61822;
LINE_541:
	if ( x15<2.26633e-07 )
		goto LINE_614;
	else if ( x15>=2.26633e-07 )
		goto LINE_615;
	else
		return 1.73195;
LINE_542:
	if ( x14<1.57132e-06 )
		goto LINE_616;
	else if ( x14>=1.57132e-06 )
		goto LINE_617;
	else
		return 1.55954;
LINE_543:
	if ( x13<0.216993 )
		goto LINE_618;
	else if ( x13>=0.216993 )
		goto LINE_619;
	else
		return 1.65629;
LINE_544:
	return 1.91964;
LINE_545:
	if ( x16<0.000956158 )
		goto LINE_620;
	else if ( x16>=0.000956158 )
		goto LINE_621;
	else
		return 1.7298;
LINE_546:
	if ( x14<3.77309e-05 )
		goto LINE_622;
	else if ( x14>=3.77309e-05 )
		goto LINE_623;
	else
		return 1.71013;
LINE_547:
	if ( x5<0.362795 )
		goto LINE_624;
	else if ( x5>=0.362795 )
		goto LINE_625;
	else
		return 1.63514;
LINE_548:
	return 1.52578;
LINE_549:
	if ( x5<0.390455 )
		goto LINE_626;
	else if ( x5>=0.390455 )
		goto LINE_627;
	else
		return 1.70303;
LINE_550:
	if ( x15<6.06863e-08 )
		goto LINE_628;
	else if ( x15>=6.06863e-08 )
		goto LINE_629;
	else
		return 1.6848;
LINE_551:
	return 1.78601;
LINE_552:
	if ( x14<1.99089e-06 )
		goto LINE_630;
	else if ( x14>=1.99089e-06 )
		goto LINE_631;
	else
		return 1.74364;
LINE_553:
	return 1.8383;
LINE_554:
	return 1.89618;
LINE_555:
	if ( x7<6.42353e-08 )
		goto LINE_632;
	else if ( x7>=6.42353e-08 )
		goto LINE_633;
	else
		return 1.74783;
LINE_556:
	if ( x8<2.98026e-09 )
		goto LINE_634;
	else if ( x8>=2.98026e-09 )
		goto LINE_635;
	else
		return 1.79242;
LINE_557:
	if ( x8<2.98037e-09 )
		goto LINE_636;
	else if ( x8>=2.98037e-09 )
		goto LINE_637;
	else
		return 1.75647;
LINE_558:
	return 1.29317;
LINE_559:
	if ( x5<0.395126 )
		goto LINE_638;
	else if ( x5>=0.395126 )
		goto LINE_639;
	else
		return 1.73491;
LINE_560:
	return 1.63732;
LINE_561:
	if ( x13<0.360432 )
		goto LINE_640;
	else if ( x13>=0.360432 )
		goto LINE_641;
	else
		return 1.78577;
LINE_562:
	return 1.88103;
LINE_563:
	return 1.81661;
LINE_564:
	return 1.68813;
LINE_565:
	if ( x5<0.355991 )
		goto LINE_642;
	else if ( x5>=0.355991 )
		goto LINE_643;
	else
		return 1.80916;
LINE_566:
	if ( x5<0.407115 )
		goto LINE_644;
	else if ( x5>=0.407115 )
		goto LINE_645;
	else
		return 1.82943;
LINE_567:
	return 1.80094;
LINE_568:
	return 1.81847;
LINE_569:
	return 1.77491;
LINE_570:
	return 1.8159;
LINE_571:
	if ( x16<0.000946749 )
		goto LINE_646;
	else if ( x16>=0.000946749 )
		goto LINE_647;
	else
		return 1.87429;
LINE_572:
	return 1.76126;
LINE_573:
	if ( x16<5.28318e-09 )
		goto LINE_648;
	else if ( x16>=5.28318e-09 )
		goto LINE_649;
	else
		return 1.29347;
LINE_574:
	return 1.04379;
LINE_575:
	return 1.20186;
LINE_576:
	return 1.12981;
LINE_577:
	return 1.26075;
LINE_578:
	return 1.25027;
LINE_579:
	return 1.2966;
LINE_580:
	if ( x5<0.153197 )
		goto LINE_650;
	else if ( x5>=0.153197 )
		goto LINE_651;
	else
		return 1.02225;
LINE_581:
	if ( x14<1.366e-06 )
		goto LINE_652;
	else if ( x14>=1.366e-06 )
		goto LINE_653;
	else
		return 1.0381;
LINE_582:
	return 1.05916;
LINE_583:
	return 1.03634;
LINE_584:
	if ( x6<1.59619e-05 )
		goto LINE_654;
	else if ( x6>=1.59619e-05 )
		goto LINE_655;
	else
		return 1.03552;
LINE_585:
	return 1.06301;
LINE_586:
	return 1.19236;
LINE_587:
	return 1.16181;
LINE_588:
	return 1.10879;
LINE_589:
	if ( x16<1.01596e-08 )
		goto LINE_656;
	else if ( x16>=1.01596e-08 )
		goto LINE_657;
	else
		return 1.15268;
LINE_590:
	return 1.01334;
LINE_591:
	return 0.980475;
LINE_592:
	return 1.01155;
LINE_593:
	return 0.998148;
LINE_594:
	return 0.99653;
LINE_595:
	if ( x15<5.46076e-08 )
		goto LINE_658;
	else if ( x15>=5.46076e-08 )
		goto LINE_659;
	else
		return 1.00836;
LINE_596:
	if ( x16<1.0105e-07 )
		goto LINE_660;
	else if ( x16>=1.0105e-07 )
		goto LINE_661;
	else
		return 1.01398;
LINE_597:
	return 1.03139;
LINE_598:
	return 1.44623;
LINE_599:
	return 1.70641;
LINE_600:
	return 1.46241;
LINE_601:
	return 1.52392;
LINE_602:
	return 1.84354;
LINE_603:
	if ( x16<0.000464808 )
		goto LINE_662;
	else if ( x16>=0.000464808 )
		goto LINE_663;
	else
		return 1.55793;
LINE_604:
	return 1.4423;
LINE_605:
	return 1.48616;
LINE_606:
	return 1.49333;
LINE_607:
	if ( x7<3.83527e-08 )
		goto LINE_664;
	else if ( x7>=3.83527e-08 )
		goto LINE_665;
	else
		return 1.6418;
LINE_608:
	return 1.61872;
LINE_609:
	if ( x16<1.01658e-07 )
		goto LINE_666;
	else if ( x16>=1.01658e-07 )
		goto LINE_667;
	else
		return 1.5039;
LINE_610:
	return 1.65072;
LINE_611:
	return 1.55458;
LINE_612:
	if ( x16<0.000944532 )
		goto LINE_668;
	else if ( x16>=0.000944532 )
		goto LINE_669;
	else
		return 1.58258;
LINE_613:
	return 1.67763;
LINE_614:
	if ( x13<0.307829 )
		goto LINE_670;
	else if ( x13>=0.307829 )
		goto LINE_671;
	else
		return 1.77342;
LINE_615:
	return 1.62827;
LINE_616:
	return 1.30561;
LINE_617:
	if ( x13<0.379739 )
		goto LINE_672;
	else if ( x13>=0.379739 )
		goto LINE_673;
	else
		return 1.59266;
LINE_618:
	return 1.36937;
LINE_619:
	if ( x14<0.000180058 )
		goto LINE_674;
	else if ( x14>=0.000180058 )
		goto LINE_675;
	else
		return 1.66586;
LINE_620:
	if ( x7<2.91934e-07 )
		goto LINE_676;
	else if ( x7>=2.91934e-07 )
		goto LINE_677;
	else
		return 1.71795;
LINE_621:
	return 2.03793;
LINE_622:
	if ( x14<3.58698e-05 )
		goto LINE_678;
	else if ( x14>=3.58698e-05 )
		goto LINE_679;
	else
		return 1.7324;
LINE_623:
	if ( x5<0.355096 )
		goto LINE_680;
	else if ( x5>=0.355096 )
		goto LINE_681;
	else
		return 1.63033;
LINE_624:
	if ( x6<1.64929e-06 )
		goto LINE_682;
	else if ( x6>=1.64929e-06 )
		goto LINE_683;
	else
		return 1.61509;
LINE_625:
	return 1.7153;
LINE_626:
	return 1.68152;
LINE_627:
	return 1.79983;
LINE_628:
	return 1.64997;
LINE_629:
	if ( x5<0.372697 )
		goto LINE_684;
	else if ( x5>=0.372697 )
		goto LINE_685;
	else
		return 1.70338;
LINE_630:
	return 1.78232;
LINE_631:
	return 1.73397;
LINE_632:
	return 1.70573;
LINE_633:
	return 1.7759;
LINE_634:
	return 1.70196;
LINE_635:
	if ( x13<0.246663 )
		goto LINE_686;
	else if ( x13>=0.246663 )
		goto LINE_687;
	else
		return 1.80634;
LINE_636:
	return 1.81737;
LINE_637:
	if ( x14<0.000838392 )
		goto LINE_688;
	else if ( x14>=0.000838392 )
		goto LINE_689;
	else
		return 1.75151;
LINE_638:
	if ( x15<4.00592e-05 )
		goto LINE_690;
	else if ( x15>=4.00592e-05 )
		goto LINE_691;
	else
		return 1.74464;
LINE_639:
	return 1.60831;
LINE_640:
	if ( x8<2.34093e-07 )
		goto LINE_692;
	else if ( x8>=2.34093e-07 )
		goto LINE_693;
	else
		return 1.80754;
LINE_641:
	if ( x5<0.390342 )
		goto LINE_694;
	else if ( x5>=0.390342 )
		goto LINE_695;
	else
		return 1.76075;
LINE_642:
	return 1.85396;
LINE_643:
	if ( x5<0.356041 )
		goto LINE_696;
	else if ( x5>=0.356041 )
		goto LINE_697;
	else
		return 1.79795;
LINE_644:
	return 1.81566;
LINE_645:
	return 1.83709;
LINE_646:
	if ( x14<2.14641e-05 )
		goto LINE_698;
	else if ( x14>=2.14641e-05 )
		goto LINE_699;
	else
		return 1.8662;
LINE_647:
	return 1.92285;
LINE_648:
	return 1.20132;
LINE_649:
	if ( x13<0.301245 )
		goto LINE_700;
	else if ( x13>=0.301245 )
		goto LINE_701;
	else
		return 1.34877;
LINE_650:
	if ( x7<2.04501e-05 )
		goto LINE_702;
	else if ( x7>=2.04501e-05 )
		goto LINE_703;
	else
		return 1.02863;
LINE_651:
	return 0.971248;
LINE_652:
	return 1.01503;
LINE_653:
	if ( x5<0.138747 )
		goto LINE_704;
	else if ( x5>=0.138747 )
		goto LINE_705;
	else
		return 1.04417;
LINE_654:
	return 1.04593;
LINE_655:
	return 1.03292;
LINE_656:
	return 1.14315;
LINE_657:
	return 1.15797;
LINE_658:
	return 1.0188;
LINE_659:
	if ( x14<1.42849e-06 )
		goto LINE_706;
	else if ( x14>=1.42849e-06 )
		goto LINE_707;
	else
		return 1.00613;
LINE_660:
	return 1.01786;
LINE_661:
	return 1.01054;
LINE_662:
	if ( x5<0.322123 )
		goto LINE_708;
	else if ( x5>=0.322123 )
		goto LINE_709;
	else
		return 1.51137;
LINE_663:
	return 1.65104;
LINE_664:
	return 1.77959;
LINE_665:
	if ( x13<0.372722 )
		goto LINE_710;
	else if ( x13>=0.372722 )
		goto LINE_711;
	else
		return 1.63455;
LINE_666:
	return 1.56928;
LINE_667:
	if ( x16<0.000945723 )
		goto LINE_712;
	else if ( x16>=0.000945723 )
		goto LINE_713;
	else
		return 1.49301;
LINE_668:
	if ( x6<1.22801e-06 )
		goto LINE_714;
	else if ( x6>=1.22801e-06 )
		goto LINE_715;
	else
		return 1.57069;
LINE_669:
	return 1.74895;
LINE_670:
	return 2.00218;
LINE_671:
	if ( x5<0.347499 )
		goto LINE_716;
	else if ( x5>=0.347499 )
		goto LINE_717;
	else
		return 1.71623;
LINE_672:
	if ( x13<0.366492 )
		goto LINE_718;
	else if ( x13>=0.366492 )
		goto LINE_719;
	else
		return 1.57209;
LINE_673:
	return 1.62465;
LINE_674:
	if ( x6<1.65179e-06 )
		goto LINE_720;
	else if ( x6>=1.65179e-06 )
		goto LINE_721;
	else
		return 1.67938;
LINE_675:
	return 1.47656;
LINE_676:
	if ( x5<0.347417 )
		goto LINE_722;
	else if ( x5>=0.347417 )
		goto LINE_723;
	else
		return 1.7018;
LINE_677:
	return 1.80679;
LINE_678:
	if ( x14<3.51161e-05 )
		goto LINE_724;
	else if ( x14>=3.51161e-05 )
		goto LINE_725;
	else
		return 1.7237;
LINE_679:
	return 2.09784;
LINE_680:
	return 1.57386;
LINE_681:
	return 1.68681;
LINE_682:
	return 1.68308;
LINE_683:
	if ( x13<0.409667 )
		goto LINE_726;
	else if ( x13>=0.409667 )
		goto LINE_727;
	else
		return 1.59243;
LINE_684:
	if ( x16<9.48381e-10 )
		goto LINE_728;
	else if ( x16>=9.48381e-10 )
		goto LINE_729;
	else
		return 1.68797;
LINE_685:
	return 1.76505;
LINE_686:
	return 1.71555;
LINE_687:
	if ( x6<2.74709e-06 )
		goto LINE_730;
	else if ( x6>=2.74709e-06 )
		goto LINE_731;
	else
		return 1.8262;
LINE_688:
	if ( x13<0.375404 )
		goto LINE_732;
	else if ( x13>=0.375404 )
		goto LINE_733;
	else
		return 1.74989;
LINE_689:
	return 1.88933;
LINE_690:
	if ( x7<5.14778e-08 )
		goto LINE_734;
	else if ( x7>=5.14778e-08 )
		goto LINE_735;
	else
		return 1.75682;
LINE_691:
	if ( x5<0.389843 )
		goto LINE_736;
	else if ( x5>=0.389843 )
		goto LINE_737;
	else
		return 1.71726;
LINE_692:
	return 1.95826;
LINE_693:
	if ( x7<2.30469e-06 )
		goto LINE_738;
	else if ( x7>=2.30469e-06 )
		goto LINE_739;
	else
		return 1.80069;
LINE_694:
	if ( x5<0.384757 )
		goto LINE_740;
	else if ( x5>=0.384757 )
		goto LINE_741;
	else
		return 1.7515;
LINE_695:
	return 1.78232;
LINE_696:
	return 1.67631;
LINE_697:
	if ( x14<3.59243e-05 )
		goto LINE_742;
	else if ( x14>=3.59243e-05 )
		goto LINE_743;
	else
		return 1.80606;
LINE_698:
	if ( x13<0.375737 )
		goto LINE_744;
	else if ( x13>=0.375737 )
		goto LINE_745;
	else
		return 1.87999;
LINE_699:
	return 1.83862;
LINE_700:
	return 1.5418;
LINE_701:
	return 1.32732;
LINE_702:
	return 1.01485;
LINE_703:
	if ( x6<1.24094e-05 )
		goto LINE_746;
	else if ( x6>=1.24094e-05 )
		goto LINE_747;
	else
		return 1.03689;
LINE_704:
	if ( x7<1.92926e-05 )
		goto LINE_748;
	else if ( x7>=1.92926e-05 )
		goto LINE_749;
	else
		return 1.03514;
LINE_705:
	return 1.05658;
LINE_706:
	return 1.01944;
LINE_707:
	if ( x7<8.21997e-07 )
		goto LINE_750;
	else if ( x7>=8.21997e-07 )
		goto LINE_751;
	else
		return 1.0051;
LINE_708:
	return 1.69151;
LINE_709:
	return 1.49136;
LINE_710:
	return 1.602;
LINE_711:
	if ( x8<7.04515e-09 )
		goto LINE_752;
	else if ( x8>=7.04515e-09 )
		goto LINE_753;
	else
		return 1.64957;
LINE_712:
	if ( x8<4.52643e-08 )
		goto LINE_754;
	else if ( x8>=4.52643e-08 )
		goto LINE_755;
	else
		return 1.4848;
LINE_713:
	return 1.58322;
LINE_714:
	return 1.45852;
LINE_715:
	if ( x14<1.62932e-06 )
		goto LINE_756;
	else if ( x14>=1.62932e-06 )
		goto LINE_757;
	else
		return 1.57932;
LINE_716:
	return 1.84113;
LINE_717:
	if ( x7<4.40268e-08 )
		goto LINE_758;
	else if ( x7>=4.40268e-08 )
		goto LINE_759;
	else
		return 1.69838;
LINE_718:
	if ( x8<1.18491e-07 )
		goto LINE_760;
	else if ( x8>=1.18491e-07 )
		goto LINE_761;
	else
		return 1.57795;
LINE_719:
	return 1.49589;
LINE_720:
	if ( x14<3.87964e-05 )
		goto LINE_762;
	else if ( x14>=3.87964e-05 )
		goto LINE_763;
	else
		return 1.72898;
LINE_721:
	if ( x5<0.347429 )
		goto LINE_764;
	else if ( x5>=0.347429 )
		goto LINE_765;
	else
		return 1.64728;
LINE_722:
	return 1.82851;
LINE_723:
	if ( x6<1.63266e-06 )
		goto LINE_766;
	else if ( x6>=1.63266e-06 )
		goto LINE_767;
	else
		return 1.68913;
LINE_724:
	if ( x13<0.291549 )
		goto LINE_768;
	else if ( x13>=0.291549 )
		goto LINE_769;
	else
		return 1.72963;
LINE_725:
	return 1.48055;
LINE_726:
	if ( x5<0.351175 )
		goto LINE_770;
	else if ( x5>=0.351175 )
		goto LINE_771;
	else
		return 1.61543;
LINE_727:
	return 1.51885;
LINE_728:
	return 1.78656;
LINE_729:
	if ( x8<1.89753e-09 )
		goto LINE_772;
	else if ( x8>=1.89753e-09 )
		goto LINE_773;
	else
		return 1.679;
LINE_730:
	if ( x5<0.380986 )
		goto LINE_774;
	else if ( x5>=0.380986 )
		goto LINE_775;
	else
		return 1.84369;
LINE_731:
	return 1.70378;
LINE_732:
	if ( x6<1.76185e-06 )
		goto LINE_776;
	else if ( x6>=1.76185e-06 )
		goto LINE_777;
	else
		return 1.73515;
LINE_733:
	if ( x6<1.97993e-06 )
		goto LINE_778;
	else if ( x6>=1.97993e-06 )
		goto LINE_779;
	else
		return 1.76363;
LINE_734:
	return 1.84525;
LINE_735:
	if ( x14<5.34691e-05 )
		goto LINE_780;
	else if ( x14>=5.34691e-05 )
		goto LINE_781;
	else
		return 1.74576;
LINE_736:
	if ( x16<2.46565e-08 )
		goto LINE_782;
	else if ( x16>=2.46565e-08 )
		goto LINE_783;
	else
		return 1.69953;
LINE_737:
	return 1.80589;
LINE_738:
	if ( x13<0.270255 )
		goto LINE_784;
	else if ( x13>=0.270255 )
		goto LINE_785;
	else
		return 1.82149;
LINE_739:
	return 1.76428;
LINE_740:
	if ( x13<0.38958 )
		goto LINE_786;
	else if ( x13>=0.38958 )
		goto LINE_787;
	else
		return 1.76384;
LINE_741:
	return 1.72064;
LINE_742:
	if ( x15<8.29651e-08 )
		goto LINE_788;
	else if ( x15>=8.29651e-08 )
		goto LINE_789;
	else
		return 1.82397;
LINE_743:
	return 1.77025;
LINE_744:
	return 1.87338;
LINE_745:
	return 1.8932;
LINE_746:
	return 1.05462;
LINE_747:
	return 1.03246;
LINE_748:
	return 1.05965;
LINE_749:
	if ( x7<2.54025e-05 )
		goto LINE_790;
	else if ( x7>=2.54025e-05 )
		goto LINE_791;
	else
		return 1.03269;
LINE_750:
	return 0.999582;
LINE_751:
	return 1.00756;
LINE_752:
	return 1.70907;
LINE_753:
	if ( x16<7.03169e-08 )
		goto LINE_792;
	else if ( x16>=7.03169e-08 )
		goto LINE_793;
	else
		return 1.63875;
LINE_754:
	return 1.47477;
LINE_755:
	return 1.51157;
LINE_756:
	return 1.64463;
LINE_757:
	if ( x15<1.28086e-06 )
		goto LINE_794;
	else if ( x15>=1.28086e-06 )
		goto LINE_795;
	else
		return 1.55973;
LINE_758:
	return 1.72863;
LINE_759:
	if ( x15<4.53518e-08 )
		goto LINE_796;
	else if ( x15>=4.53518e-08 )
		goto LINE_797;
	else
		return 1.68628;
LINE_760:
	return 1.58896;
LINE_761:
	return 1.55318;
LINE_762:
	if ( x14<1.55891e-06 )
		goto LINE_798;
	else if ( x14>=1.55891e-06 )
		goto LINE_799;
	else
		return 1.71383;
LINE_763:
	return 1.88039;
LINE_764:
	return 1.79804;
LINE_765:
	if ( x15<6.55832e-08 )
		goto LINE_800;
	else if ( x15>=6.55832e-08 )
		goto LINE_801;
	else
		return 1.63786;
LINE_766:
	return 1.55131;
LINE_767:
	if ( x7<9.1718e-08 )
		goto LINE_802;
	else if ( x7>=9.1718e-08 )
		goto LINE_803;
	else
		return 1.70444;
LINE_768:
	return 1.86157;
LINE_769:
	if ( x5<0.347254 )
		goto LINE_804;
	else if ( x5>=0.347254 )
		goto LINE_805;
	else
		return 1.71536;
LINE_770:
	return 1.65695;
LINE_771:
	if ( x5<0.352089 )
		goto LINE_806;
	else if ( x5>=0.352089 )
		goto LINE_807;
	else
		return 1.59051;
LINE_772:
	return 1.63644;
LINE_773:
	return 1.68846;
LINE_774:
	return 1.92953;
LINE_775:
	if ( x8<3.18339e-08 )
		goto LINE_808;
	else if ( x8>=3.18339e-08 )
		goto LINE_809;
	else
		return 1.82028;
LINE_776:
	return 1.77357;
LINE_777:
	if ( x16<8.96851e-08 )
		goto LINE_810;
	else if ( x16>=8.96851e-08 )
		goto LINE_811;
	else
		return 1.72583;
LINE_778:
	if ( x6<1.81101e-06 )
		goto LINE_812;
	else if ( x6>=1.81101e-06 )
		goto LINE_813;
	else
		return 1.78298;
LINE_779:
	if ( x5<0.38491 )
		goto LINE_814;
	else if ( x5>=0.38491 )
		goto LINE_815;
	else
		return 1.74244;
LINE_780:
	if ( x7<7.07235e-08 )
		goto LINE_816;
	else if ( x7>=7.07235e-08 )
		goto LINE_817;
	else
		return 1.74966;
LINE_781:
	return 1.65601;
LINE_782:
	return 1.73345;
LINE_783:
	return 1.68499;
LINE_784:
	return 1.79213;
LINE_785:
	return 1.86063;
LINE_786:
	return 1.74995;
LINE_787:
	return 1.78468;
LINE_788:
	return 1.80647;
LINE_789:
	return 1.85022;
LINE_790:
	return 1.02886;
LINE_791:
	return 1.03652;
LINE_792:
	return 1.62727;
LINE_793:
	return 1.66937;
LINE_794:
	return 1.5676;
LINE_795:
	return 1.48893;
LINE_796:
	return 1.6437;
LINE_797:
	return 1.69692;
LINE_798:
	return 1.76427;
LINE_799:
	return 1.6634;
LINE_800:
	return 1.57402;
LINE_801:
	if ( x7<6.56536e-08 )
		goto LINE_818;
	else if ( x7>=6.56536e-08 )
		goto LINE_819;
	else
		return 1.65914;
LINE_802:
	return 1.74009;
LINE_803:
	if ( x6<3.66063e-06 )
		goto LINE_820;
	else if ( x6>=3.66063e-06 )
		goto LINE_821;
	else
		return 1.68662;
LINE_804:
	return 1.80068;
LINE_805:
	if ( x5<0.348555 )
		goto LINE_822;
	else if ( x5>=0.348555 )
		goto LINE_823;
	else
		return 1.69183;
LINE_806:
	return 1.43579;
LINE_807:
	return 1.60771;
LINE_808:
	if ( x16<1.48373e-07 )
		goto LINE_824;
	else if ( x16>=1.48373e-07 )
		goto LINE_825;
	else
		return 1.7938;
LINE_809:
	return 1.85853;
LINE_810:
	if ( x16<7.46774e-08 )
		goto LINE_826;
	else if ( x16>=7.46774e-08 )
		goto LINE_827;
	else
		return 1.71173;
LINE_811:
	if ( x8<1.64299e-07 )
		goto LINE_828;
	else if ( x8>=1.64299e-07 )
		goto LINE_829;
	else
		return 1.75052;
LINE_812:
	if ( x15<1.74122e-07 )
		goto LINE_830;
	else if ( x15>=1.74122e-07 )
		goto LINE_831;
	else
		return 1.75686;
LINE_813:
	if ( x8<5.31395e-08 )
		goto LINE_832;
	else if ( x8>=5.31395e-08 )
		goto LINE_833;
	else
		return 1.81147;
LINE_814:
	if ( x6<2.2866e-06 )
		goto LINE_834;
	else if ( x6>=2.2866e-06 )
		goto LINE_835;
	else
		return 1.76131;
LINE_815:
	return 1.71178;
LINE_816:
	return 1.72425;
LINE_817:
	if ( x6<1.90748e-06 )
		goto LINE_836;
	else if ( x6>=1.90748e-06 )
		goto LINE_837;
	else
		return 1.76322;
LINE_818:
	return 1.68133;
LINE_819:
	return 1.61477;
LINE_820:
	return 1.65821;
LINE_821:
	return 1.71503;
LINE_822:
	return 1.60114;
LINE_823:
	if ( x7<7.56577e-08 )
		goto LINE_838;
	else if ( x7>=7.56577e-08 )
		goto LINE_839;
	else
		return 1.70229;
LINE_824:
	if ( x15<3.56428e-08 )
		goto LINE_840;
	else if ( x15>=3.56428e-08 )
		goto LINE_841;
	else
		return 1.78297;
LINE_825:
	return 1.85334;
LINE_826:
	if ( x14<0.0005079 )
		goto LINE_842;
	else if ( x14>=0.0005079 )
		goto LINE_843;
	else
		return 1.72193;
LINE_827:
	return 1.65053;
LINE_828:
	if ( x6<1.80373e-06 )
		goto LINE_844;
	else if ( x6>=1.80373e-06 )
		goto LINE_845;
	else
		return 1.74362;
LINE_829:
	return 1.82636;
LINE_830:
	if ( x13<0.406143 )
		goto LINE_846;
	else if ( x13>=0.406143 )
		goto LINE_847;
	else
		return 1.7695;
LINE_831:
	return 1.69367;
LINE_832:
	return 1.82055;
LINE_833:
	return 1.77063;
LINE_834:
	return 1.73297;
LINE_835:
	return 1.78561;
LINE_836:
	return 1.74333;
LINE_837:
	return 1.78595;
LINE_838:
	return 1.84152;
LINE_839:
	if ( x13<0.2956 )
		goto LINE_848;
	else if ( x13>=0.2956 )
		goto LINE_849;
	else
		return 1.69069;
LINE_840:
	return 1.87006;
LINE_841:
	if ( x14<1.83027e-06 )
		goto LINE_850;
	else if ( x14>=1.83027e-06 )
		goto LINE_851;
	else
		return 1.77426;
LINE_842:
	if ( x6<1.89944e-06 )
		goto LINE_852;
	else if ( x6>=1.89944e-06 )
		goto LINE_853;
	else
		return 1.71118;
LINE_843:
	return 1.75954;
LINE_844:
	return 1.68716;
LINE_845:
	if ( x14<1.73901e-06 )
		goto LINE_854;
	else if ( x14>=1.73901e-06 )
		goto LINE_855;
	else
		return 1.74927;
LINE_846:
	return 1.78542;
LINE_847:
	return 1.73235;
LINE_848:
	return 1.84831;
LINE_849:
	if ( x13<0.299196 )
		goto LINE_856;
	else if ( x13>=0.299196 )
		goto LINE_857;
	else
		return 1.68384;
LINE_850:
	return 1.75499;
LINE_851:
	return 1.79353;
LINE_852:
	return 1.74575;
LINE_853:
	if ( x14<1.6096e-06 )
		goto LINE_858;
	else if ( x14>=1.6096e-06 )
		goto LINE_859;
	else
		return 1.69735;
LINE_854:
	return 1.69962;
LINE_855:
	return 1.75478;
LINE_856:
	return 1.56999;
LINE_857:
	if ( x5<0.363838 )
		goto LINE_860;
	else if ( x5>=0.363838 )
		goto LINE_861;
	else
		return 1.69468;
LINE_858:
	return 1.75222;
LINE_859:
	return 1.69126;
LINE_860:
	if ( x7<2.23475e-06 )
		goto LINE_862;
	else if ( x7>=2.23475e-06 )
		goto LINE_863;
	else
		return 1.70946;
LINE_861:
	return 1.6474;
LINE_862:
	if ( x6<2.25264e-06 )
		goto LINE_864;
	else if ( x6>=2.25264e-06 )
		goto LINE_865;
	else
		return 1.71635;
LINE_863:
	return 1.66122;
LINE_864:
	return 1.70106;
LINE_865:
	return 1.73673;
}

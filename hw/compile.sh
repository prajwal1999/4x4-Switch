rm -rf .Aa
mkdir .Aa
# preprocess.
AaPreprocess -I src/  src/master.aa -o src/master.incl.aa
# link
AaLinkExtMem src/decls.aa src/utils.aa  src/master.incl.aa | vcFormat > .Aa/switch4x4.linked.aa 
# aa2c model.
TOPMODULES="-T inputPort_1_Daemon -T inputPort_2_Daemon -T inputPort_3_Daemon -T inputPort_4_Daemon -T outputPort_1_Daemon -T outputPort_2_Daemon -T outputPort_3_Daemon -T outputPort_4_Daemon"
rm -rf aa2c
mkdir aa2c
Aa2C $TOPMODULES .Aa/switch4x4.linked.aa  -o aa2c/


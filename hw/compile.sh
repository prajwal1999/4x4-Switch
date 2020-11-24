rm -rf .Aa
mkdir .Aa
# preprocess.
AaPreprocess -I src/  src/master.aa -o src/master.incl.aa
# link
AaLinkExtMem src/decls.aa src/utils.aa  src/master.incl.aa | vcFormat > .Aa/switch2x2.linked.aa 
# aa2c model.
TOPMODULES="-T inputPort_1_Daemon -T inputPort_2_Daemon -T outputPort_1_Daemon -T outputPort_2_Daemon"
rm -rf aa2c
mkdir aa2c
Aa2C $TOPMODULES .Aa/switch2x2.linked.aa  -o aa2c/


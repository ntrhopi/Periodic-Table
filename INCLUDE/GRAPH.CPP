//fuction definitions

void ini()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:/TC/BGI");
}


void mainscreen()
{
    int i,j,k;
    ini();
    cleardevice();
    setbkcolor(11);
    setcolor(8);
    settextstyle(SIMPLEX_FONT,0,7);
    outtextxy(60,-20,"THE PERIODIC TABLE");
    setcolor(14);
    setlinestyle(0,0,THICK_WIDTH);    //style,pattern,thickness
    setfillstyle(SOLID_FILL,1);
    bar(10,54,45,390);
    line(10,54,45,54);
    line(10,54,10,390);
    line(10,100,80,100);
    settextstyle(SMALL_FONT,0,8);            //displaying 1st group elements
    outtextxy(22,60,"H");
    outtextxy(17,110,"Li");
    outtextxy(16,160,"Na");
    outtextxy(22,210,"K");
    outtextxy(16,255,"Rb");
    outtextxy(16,300,"Cs");
    outtextxy(16,350,"Fr");
    bar(120,100,135,115);
    setfillstyle(SOLID_FILL,RED);
    bar(120,125,135,140);
    setfillstyle(SOLID_FILL,GREEN);
    bar(120,150,135,165);
    setfillstyle(SOLID_FILL,8);
    bar(120,175,135,190);
    setfillstyle(SOLID_FILL,5);
    bar(280,100,295,115);
    setfillstyle(SOLID_FILL,13);
    bar(280,125,295,140);
    setfillstyle(SOLID_FILL,7);
    bar(280,150,295,165);
    setfillstyle(SOLID_FILL,6);
    bar(280,175,295,190);

    settextstyle(SMALL_FONT,0,4);           //legend for colors used
    setcolor(8);
    outtextxy(140,102,"ALKALI METALS");
    outtextxy(140,127,"ALKALINE EARTH METALS");
    outtextxy(140,154,"TRANSITION METALS");
    outtextxy(140,177,"LANTHANOIDS");
    outtextxy(300,102,"ACTINOIDS");
    outtextxy(300,127,"NON-METALS");
    outtextxy(300,152,"METALLIODS");
    outtextxy(300,177,"NOBLE GASES");
    setcolor(14);

    setfillstyle(SOLID_FILL,4);
    bar(45,102,80,390);      //35 width of every group,48 height of period
    line(45,54,45,390);
    settextstyle(SMALL_FONT,0,8);      //displaying 2nd group elements
    outtextxy(50,110,"Be");
    outtextxy(50,160,"Mg");
    outtextxy(50,210,"Ca");
    outtextxy(50,255,"Sr");
    outtextxy(50,300,"Ba");
    outtextxy(50,350,"Ra");

    setfillstyle(SOLID_FILL,2);
    bar(80,198,430,390);     //  d block
    line(80,100,80,390);
    for(i=115;i<=395;i+=35)   //vertical lines
	line(i,198,i,390);

    outtextxy(85,210,"Sc");          //displaying 3rd group elements
    outtextxy(92,255,"Y");
    settextstyle(SMALL_FONT,0,4);
    outtextxy(83,310,"La-Lu");
    outtextxy(84,360,"Ac-Lr");
    settextstyle(SMALL_FONT,0,8);

    outtextxy(120,210,"Ti");        //displaying 4th group elements
    outtextxy(121,255,"Zr");
    outtextxy(122,300,"Hf");
    outtextxy(122,350,"Rf");

    outtextxy(162,210,"V");         //displaying 5th group elements
    outtextxy(155,255,"Nb");
    outtextxy(155,300,"Ta");
    outtextxy(155,350,"Db");

    outtextxy(193,210,"Cr");        //displaying 6th group elements
    outtextxy(191,255,"Mo");
    outtextxy(197,300,"W");
    outtextxy(190,350,"Sg");

    outtextxy(225,210,"Mn");        //displaying 7th group elements
    outtextxy(225,255,"Tc");
    outtextxy(225,300,"Re");
    outtextxy(225,350,"Bh");

    outtextxy(261,210,"Fe");        //displaying 8th group elements
    outtextxy(260,255,"Ru");
    outtextxy(260,300,"Os");
    outtextxy(260,350,"Hs");

    outtextxy(295,210,"Co");         //displaying 9th group elements
    outtextxy(295,255,"Rh");
    outtextxy(295,300,"Ir");
    outtextxy(295,350,"Mt");

    outtextxy(333,210,"Ni");         //displaying 10th group elements
    outtextxy(330,255,"Pd");
    outtextxy(332,300,"Pt");
    outtextxy(330,350,"Ds");

    outtextxy(365,210,"Cu");         //displaying 11th group elements
    outtextxy(365,255,"Ag");
    outtextxy(365,300,"Au");
    outtextxy(365,350,"Rg");

    outtextxy(400,210,"Zn");         //displaying 12th group elements
    outtextxy(400,255,"Cd");
    outtextxy(400,300,"Hg");
    outtextxy(400,350,"Cn");

    bar(430,342,640,390); //unnamed elements
    bar(80,405,115,440);   //La
    bar(80,440,115,475);   //Ac

    setfillstyle(SOLID_FILL,13);          //non metal
    for(i=430,j=465,k=150;i<=570;i+=35,j+=35,k+=48)
	bar(i,102,j,k);

    setfillstyle(SOLID_FILL,7);         //metalliod
    for(i=430,j=150,k=465;i<=535;i+=35,j+=48,k+=35)
	bar(i,j,k,342);

    setfillstyle(SOLID_FILL,6);   //inert
    bar(605,54,640,342);
    for(i=430;i<=570;i+=35)  //vertical lines
	line(i,102,i,390);
    line(605,54,605,390);

    line(430,150,640,150);      //for horizontal lines main
    for(i=198;i<=390;i+=48)
	line(10,i,640,i);
    line(10,150,80,150);
    line(430,102,640,102);

    setfillstyle(SOLID_FILL,8);   //lanthanide and actinides
    bar(115,405,605,440);
    setfillstyle(SOLID_FILL,5);
    bar(115,440,605,475);
    line(638,54,638,390);
    line(605,54,640,54);
    rectangle(80,405,605,475);
    line(80,440,605,440);
    for(i=115;i<=570;i+=35)
	line(i,405,i,475);

    outtextxy(442,110,"B");             //displaying 13th group elements
    outtextxy(438,160,"Al");
    outtextxy(435,210,"Ga");
    outtextxy(436,255,"In");
    outtextxy(436,300,"Tl");
    outtextxy(436,350,"Nh");

    outtextxy(478,110,"C");             //displaying 14th group elements
    outtextxy(474,160,"Si");
    outtextxy(471,210,"Ge");
    outtextxy(470,255,"Sn");
    outtextxy(470,300,"Pb");
    outtextxy(475,350,"Fl");

    outtextxy(515,110,"N");             //displaying 15th group elements
    outtextxy(515,160,"P");
    outtextxy(506,210,"As");
    outtextxy(506,255,"Sb");
    outtextxy(510,300,"Bi");
    outtextxy(506,350,"Mc");
    settextstyle(SMALL_FONT,0,8);

    outtextxy(547,110,"O");             //displaying 16th group elements
    outtextxy(547,160,"S");
    outtextxy(540,210,"Se");
    outtextxy(540,255,"Te");
    outtextxy(541,300,"Po");
    outtextxy(540,350,"Lv");

    outtextxy(582,110,"F");             //displaying 17th group elements
    outtextxy(578,160,"Cl");
    outtextxy(578,210,"Br");
    outtextxy(584,255,"I");
    outtextxy(576,300,"At");
    settextstyle(SMALL_FONT,0,6);
    outtextxy(575,357,"Uus");
    settextstyle(SMALL_FONT,0,8);
					//displaying 18th group elements
    outtextxy(610,60,"He");
    outtextxy(610,110,"Ne");
    outtextxy(610,160,"Ar");
    outtextxy(610,210,"Kr");
    outtextxy(610,255,"Xe");
    outtextxy(610,300,"Rn");
    settextstyle(SMALL_FONT,0,6);
    outtextxy(609,357,"Uuo");

    settextstyle(SMALL_FONT,0,8);
    outtextxy(85,408,"La");        //displaying lanthanides & actinoids
    outtextxy(85,442,"Ac");
    outtextxy(120,408,"Ce");
    outtextxy(120,442,"Th");
    outtextxy(155,408,"Pr");
    outtextxy(155,442,"Pa");
    outtextxy(190,408,"Nd");
    outtextxy(198,442,"U");
    outtextxy(225,408,"Pm");
    outtextxy(225,442,"Np");
    outtextxy(260,408,"Sm");
    outtextxy(260,442,"Pu");
    outtextxy(295,408,"Eu");
    outtextxy(295,442,"Am");
    outtextxy(330,408,"Gd");
    outtextxy(330,442,"Cm");
    outtextxy(365,408,"Td");
    outtextxy(365,442,"Bk");
    outtextxy(400,408,"Dy");
    outtextxy(400,442,"Cf");
    outtextxy(435,408,"Ho");
    outtextxy(435,442,"Es");
    outtextxy(470,408,"Er");
    outtextxy(470,442,"Fm");
    outtextxy(505,408,"Tm");
    outtextxy(505,442,"Md");
    outtextxy(540,408,"Yb");
    outtextxy(540,442,"No");
    outtextxy(575,408,"Lu");
    outtextxy(575,442,"Lr");

    getch();
}

void sblock()
{
    int i;
    ini();
    setbkcolor(11);
    setcolor(14);
    setlinestyle(0,0,THICK_WIDTH);
    setfillstyle(SOLID_FILL,1);
    bar(245,30,310,450);
    setfillstyle(SOLID_FILL,RED);
    bar(310,90,375,450);                //60 length,65 width
    line(245,30,245,450);
    line(310,30,310,450);
    line(375,90,375,450);
    line(245,450,375,450);
    line(245,30,310,30);
    line(245,90,375,90);
    for(i=150;i<=390;i+=60)
	line(245,i,375,i);

    settextstyle(SMALL_FONT,0,9);
    outtextxy(270,39,"H");
    outtextxy(270,99,"Li");
    outtextxy(270,159,"Na");
    outtextxy(270,219,"K");
    outtextxy(270,279,"Rb");
    outtextxy(270,339,"Cs");
    outtextxy(270,399,"Fr");

    settextstyle(SMALL_FONT,0,5);
    outtextxy(250,32,"1");
    outtextxy(250,92,"3");
    outtextxy(250,152,"11");
    outtextxy(250,212,"19");
    outtextxy(250,272,"37");
    outtextxy(250,332,"55");
    outtextxy(250,392,"87");

    settextstyle(SMALL_FONT,0,9);
    outtextxy(335,99,"Be");
    outtextxy(335,159,"Mg");
    outtextxy(335,219,"Ca");
    outtextxy(335,279,"Sr");
    outtextxy(335,339,"Ba");
    outtextxy(335,399,"Ra");

    settextstyle(SMALL_FONT,0,5);
    outtextxy(315,92,"4");
    outtextxy(315,152,"12");
    outtextxy(315,212,"20");
    outtextxy(315,272,"38");
    outtextxy(315,332,"56");
    outtextxy(315,392,"88");

    getch();
}

void dblock()
{
    int i;
    ini();
    setbkcolor(11);
    setcolor(14);
    setlinestyle(0,0,THICK_WIDTH);   //60 length,60 width
    setfillstyle(SOLID_FILL,2);
    bar(20,120,620,360);

    line(20,120,20,360);          //vertical lines
    line(620,120,620,360);
    line(20,120,620,120);
    line(20,360,620,360);
    line(80,120,80,360);
    for(i=140;i<=560;i+=60)
	line(i,120,i,360);

    line(20,180,620,180);        //horizontal lines
    line(20,240,620,240);
    line(20,300,620,300);

    settextstyle(SMALL_FONT,0,9);
    outtextxy(40,134,"Sc");        //displaying d blocks elements
    outtextxy(40,194,"Y");
    outtextxy(40,256,"La");
    outtextxy(40,316,"Ac");

    settextstyle(SMALL_FONT,0,9);
    outtextxy(106,134,"Ti");
    outtextxy(106,194,"Zr");
    outtextxy(106,256,"Hf");
    outtextxy(106,316,"Rf");

    outtextxy(163,134,"V");
    outtextxy(163,194,"Nb");
    outtextxy(163,256,"Ta");
    outtextxy(163,316,"Db");

    outtextxy(223,134,"Cr");
    outtextxy(223,194,"Mo");
    outtextxy(223,256,"W");
    outtextxy(223,316,"Sg");

    outtextxy(283,134,"Mn");
    outtextxy(283,194,"Tc");
    outtextxy(283,256,"Re");
    outtextxy(283,316,"Bh");

    outtextxy(343,134,"Fe");
    outtextxy(343,194,"Ru");
    outtextxy(343,256,"Os");
    outtextxy(343,316,"Hs");

    outtextxy(403,134,"Co");
    outtextxy(403,194,"Rh");
    outtextxy(403,256,"Ir");
    outtextxy(403,316,"Mt");

    outtextxy(463,134,"Ni");
    outtextxy(463,194,"Pd");
    outtextxy(463,256,"Pt");
    outtextxy(463,316,"Ds");

    outtextxy(523,134,"Cu");
    outtextxy(523,194,"Ag");
    outtextxy(523,256,"Au");
    outtextxy(523,316,"Rg");

    outtextxy(583,134,"Zn");
    outtextxy(583,194,"Cd");
    outtextxy(583,256,"Hg");
    outtextxy(583,316,"Cn");

    settextstyle(SMALL_FONT,0,5);
    outtextxy(23,244,"57");        //displaying at no
    outtextxy(23,304,"89");
    outtextxy(23,124,"21");
    outtextxy(23,184,"12");
    outtextxy(83,124,"22");
    outtextxy(83,184,"40");
    outtextxy(83,244,"72");
    outtextxy(83,304,"104");
    outtextxy(143,124,"23");
    outtextxy(143,184,"41");
    outtextxy(143,244,"73");
    outtextxy(143,304,"105");
    outtextxy(203,124,"24");
    outtextxy(203,184,"42");
    outtextxy(203,244,"74");
    outtextxy(203,304,"106");
    outtextxy(263,124,"25");
    outtextxy(263,184,"43");
    outtextxy(263,244,"75");
    outtextxy(263,304,"107");
    outtextxy(323,124,"26");
    outtextxy(323,184,"44");
    outtextxy(323,244,"76");
    outtextxy(323,304,"108");
    outtextxy(383,124,"27");
    outtextxy(383,184,"45");
    outtextxy(383,244,"77");
    outtextxy(383,304,"109");
    outtextxy(443,124,"28");
    outtextxy(443,184,"46");
    outtextxy(443,244,"78");
    outtextxy(443,304,"110");
    outtextxy(503,124,"29");
    outtextxy(503,184,"47");
    outtextxy(503,244,"79");
    outtextxy(503,304,"111");
    outtextxy(563,124,"30");
    outtextxy(563,184,"48");
    outtextxy(563,244,"80");
    outtextxy(563,304,"112");

    getch();
}
void fblock()
{
    int i;
    ini();
    setbkcolor(11);
    setcolor(14);
    setlinestyle(0,0,THICK_WIDTH);
    setfillstyle(SOLID_FILL,8);   //45 witdh,50 height
    bar(5,170,635,220);
    setfillstyle(SOLID_FILL,5);
    bar(5,220,635,270);

    rectangle(5,170,635,270);
    line(5,220,635,220);
    line(50,170,50,270);
    line(95,170,95,270);
    for(i=140;i<=590;i+=45)
	line(i,170,i,270);

    settextstyle(SMALL_FONT,0,8);
    outtextxy(17,188,"Ce");       //displaying f block elements
    outtextxy(17,238,"Th");
    outtextxy(62,188,"Pr");
    outtextxy(62,238,"Pa");
    outtextxy(107,188,"Nd");
    outtextxy(112,238,"U");
    outtextxy(152,188,"Pm");
    outtextxy(152,238,"Np");
    outtextxy(197,188,"Sm");
    outtextxy(197,238,"Pu");
    outtextxy(242,188,"Eu");
    outtextxy(242,238,"Am");
    outtextxy(287,188,"Gd");
    outtextxy(287,238,"Cm");
    outtextxy(332,188,"Td");
    outtextxy(332,238,"Bk");
    outtextxy(377,188,"Dy");
    outtextxy(377,238,"Cf");
    outtextxy(422,188,"Ho");
    outtextxy(422,238,"Es");
    outtextxy(467,188,"Er");
    outtextxy(467,238,"Fm");
    outtextxy(512,188,"Tm");
    outtextxy(512,238,"Md");
    outtextxy(557,188,"Yb");
    outtextxy(557,238,"No");
    outtextxy(602,188,"Lu");
    outtextxy(602,238,"Lr");

    settextstyle(SMALL_FONT,0,5);
    outtextxy(9,170,"58");         //displaying at no
    outtextxy(9,220,"90");
    outtextxy(53,170,"59");
    outtextxy(53,220,"91");
    outtextxy(98,170,"60");
    outtextxy(98,220,"92");
    outtextxy(143,170,"61");
    outtextxy(143,220,"93");
    outtextxy(188,170,"62");
    outtextxy(188,220,"94");
    outtextxy(233,170,"63");
    outtextxy(233,220,"95");
    outtextxy(278,170,"64");
    outtextxy(278,220,"96");
    outtextxy(323,170,"65");
    outtextxy(323,220,"97");
    outtextxy(368,170,"66");
    outtextxy(368,220,"98");
    outtextxy(413,170,"67");
    outtextxy(413,220,"99");
    outtextxy(458,170,"68");
    outtextxy(458,220,"100");
    outtextxy(503,170,"69");
    outtextxy(503,220,"101");
    outtextxy(548,170,"70");
    outtextxy(548,220,"102");
    outtextxy(593,170,"71");
    outtextxy(593,220,"103");

    getch();
}
void pblock()
{
    int i,j,k;
    ini();
    setbkcolor(11);
    setcolor(14);
    setlinestyle(0,0,THICK_WIDTH);   //60 length,60 width
    setfillstyle(SOLID_FILL,13);
    for(i=140,j=120,k=180;i<=380;i+=60,j+=60,k+=60)
	bar(i,j,440,k);
    setfillstyle(SOLID_FILL,6);
    bar(440,60,500,420);
    setfillstyle(SOLID_FILL,7);
    for(i=180,j=240,k=200;i<=360;i+=60,j+=60,k+=60)
	bar(140,i,k,j);

    rectangle(140,120,500,420);
    for(i=200;i<=380;i+=60)
	line(i,120,i,420);
    for(i=180;i<=360;i+=60)
	line(140,i,500,i);
    line(440,60,440,420);
    line(440,60,500,60);
    line(500,60,500,120);

    settextstyle(SMALL_FONT,0,9);
    outtextxy(162,140,"B");       //displaying s block element
    outtextxy(162,200,"Al");
    outtextxy(162,260,"Ga");
    outtextxy(162,320,"In");
    outtextxy(162,380,"Tl");

    outtextxy(222,140,"C");
    outtextxy(222,200,"Si");
    outtextxy(222,260,"Ge");
    outtextxy(222,320,"Sn");
    outtextxy(222,380,"Pb");

    outtextxy(282,140,"N");
    outtextxy(282,200,"P");
    outtextxy(282,260,"As");
    outtextxy(282,320,"Sb");
    outtextxy(282,380,"Bi");

    outtextxy(342,140,"O");
    outtextxy(342,200,"S");
    outtextxy(342,260,"Se");
    outtextxy(342,320,"Te");
    outtextxy(342,380,"Po");

    outtextxy(402,140,"F");
    outtextxy(402,200,"Cl");
    outtextxy(402,260,"Br");
    outtextxy(402,320,"I");
    outtextxy(402,380,"At");

    outtextxy(462,80,"He");
    outtextxy(462,140,"Ne");
    outtextxy(462,200,"Ar");
    outtextxy(462,260,"Kr");
    outtextxy(462,320,"Xe");
    outtextxy(462,380,"Rn");

    settextstyle(SMALL_FONT,0,5);
    outtextxy(143,122,"5");          //displaying at no
    outtextxy(143,182,"13");
    outtextxy(143,242,"31");
    outtextxy(143,302,"49");
    outtextxy(143,362,"81");
    outtextxy(203,122,"6");
    outtextxy(203,182,"14");
    outtextxy(203,242,"32");
    outtextxy(203,302,"50");
    outtextxy(203,362,"82");
    outtextxy(263,122,"7");
    outtextxy(263,182,"15");
    outtextxy(263,242,"33");
    outtextxy(263,302,"51");
    outtextxy(263,362,"83");
    outtextxy(323,122,"8");
    outtextxy(323,182,"16");
    outtextxy(323,242,"34");
    outtextxy(323,302,"52");
    outtextxy(323,362,"84");
    outtextxy(383,122,"9");
    outtextxy(383,182,"17");
    outtextxy(383,242,"35");
    outtextxy(383,302,"53");
    outtextxy(383,362,"85");
    outtextxy(443,62,"1");
    outtextxy(443,122,"10");
    outtextxy(443,182,"18");
    outtextxy(443,242,"36");
    outtextxy(443,302,"54");
    outtextxy(443,362,"86");

    getch();
}

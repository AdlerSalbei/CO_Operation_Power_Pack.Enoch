/*
*   Definiert voreingestellte Funkfrequenzen und Netznamen.
*   Netzname ist optional und wird, sofern vorhanden, bei Spielstart am Kartenrand vermerkt.
*
*   Die ersten 8 Shortrange Netze werden auf den SR Kanälen 1-8 und die ersten 9 Longrange Netze werden auf den LR Kanälen 1-9 voreingestellt.
*   Es können weitere Netze definiert werden, die dann in der groupsettings.hpp einzelnen Gruppen zugewiesen werden können.
*
*   Beispiel:
    class net1 {
        freq = 32.5;
        name = "Command";
    };

    //[...]

    class net10 {
        freq = 80.1;
        name = "Air";
    };
*/

//SHORTRANGE KANÄLE ============================================================
class shortrange {
    class net1 {
        freq = 50;
        name = "Sierra";
    };

    class net2 {
        freq = 60;
        name = "Echo";
    };

    class net3 {
        freq = 70;
        name = "Echo 1";
    };

    class net4 {
        freq = 80;
        name = "Echo 2";
    };

    class net5 {
        freq = 90;
        name = "Foxtrott";
    };

    class net6 {
        freq = 100;
        name = "Foxtrott 1";
    };

    class net7 {
        freq = 110;
        name = "Foxtrott 2";
    };

    class net8 {
        freq = 120;
        name = "Mike";
    };
};


//LONGRANGE KANÄLE =============================================================
class longrange {
    class net1 {
        freq = 42;
        name = "OPZ";
    };

    class net2 {
        freq = 43;
        name = "Command";
    };

    class net3 {
        freq = 44;
        name = "JTAC/Air";
    };

    class net4 {
        freq = 45;
    };

    class net5 {
        freq = 46;
    };

    class net6 {
        freq = 47;
    };

    class net7 {
        freq = 48;
    };

    class net8 {
        freq = 49;
    };

    class net9 {
        freq = 51;
    };
};

/*
*   Legt Gruppennamen, Standard- und Sonderkanäle fest.
*   Gruppenspezifische Kanäle können über die Einträge channel1-channel8 für Shortrange und channel1-channel9 für Longrange festgelegt werden.
*   Hier werden die in der radiosettings.hpp definiertennamen oder Klassennamen der Kanäle verwendet.
*
*   Beispiel:
*
    class BLUFOR {
        class group1 {
            groupName = "Command";

            class shortrange {
                defaultChannel = 1;
                altChannel = 3;
                altChannelOnlyTL = 1;

                channel1 = "Command";
                channel3 = "net13";
                channel7 = "Command";
            };

            class longrange {
                defaultChannel = 2;
                altChannel = 5;
                altChannelOnlyTL = 1;

                channel2 = "Air";
                channel5 = "net10";
            };
        };
    };
*
*/

class BLUFOR {
    class group1 {
        groupName = "Oscar";

        class longrange {
            defaultChannel = 2;
            altChannel = 1;

            channel2 = "Command";
            channel1 = "OPZ";
        };
    };

    class group2 {
        groupName = "Echo";

        class shortrange {
            defaultChannel = 2;

            channel2 = "Echo";
        };

        class longrange {
            defaultChannel = 2;

            channel2 = "Command";
        };
    };

    class group3 {
        groupName = "Echo 1";

        class shortrange {
            defaultChannel = 2;
            altChannel = 3;
            altChannelOnlyTL = 1;

            channel2 = "Echo";
            channel3 = "Echo 1";
        };
    };

    class group4 {
        groupName = "Echo 2";

        class shortrange {
            defaultChannel = 2;
            altChannel = 4;
            altChannelOnlyTL = 1;

            channel2 = "Echo";
            channel4 = "Echo 2";
        };
    };

    class group5 {
        groupName = "Foxtrott";

        class shortrange {
            defaultChannel = 5;

            channel5 = "Foxtrott";
        };

        class longrange {
            defaultChannel = 2;

            channel2 = "Command";
        };
    };

    class group6 {
        groupName = "Foxtrott 1";

        class shortrange {
            defaultChannel = 6;
            altChannel = 5;
            altChannelOnlyTL = 1;

            channel6 = "Foxtrott 1";
            channel5 = "Foxtrott";
        };
    };

    class group7 {
        groupName = "Foxtrott 2";

        class shortrange {
            defaultChannel = 7;
            altChannel = 5;
            altChannelOnlyTL = 1;

            channel7 = "Foxtrott 2";
            channel5 = "Foxtrott";
        };
    };

    class group8 {
        groupName = "Mike";

        class shortrange {
            defaultChannel = 8;

            channel8 = "Mike";
        };

        class longrange {
            defaultChannel = 2;

            channel2 = "Command";
        };
    };

    class group9 {
        groupName = "Sierra";

        class shortrange {
            defaultChannel = 1;

            channel1 = "Sierra";

        };

        class longrange {
            defaultChannel = 2;

            channel2 = "Command";
        };
    };

    class group10 {
        groupName = "Hotel 1";
        class longrange {
            defaultChannel = 2;
            altChannel = 1;

            channel2 = "Command";
            channel1 = "OPZ";
        };
    };

    class group11 {
        groupName = "Hotel 2";
        class longrange {
            defaultChannel = 2;
            altChannel = 1;

            channel2 = "Command";
            channel1 = "OPZ";
        };
    };
};

class OPFOR {};

class INDEPENDENT {};

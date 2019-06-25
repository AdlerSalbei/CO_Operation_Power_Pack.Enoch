/*
*   Legt Gruppennamen, Standard- und Sonderkanäle fest.
*   Gruppenspezifische Kanäle können über die Einträge channel1-channel8 für Shortrange und channel1-channel9 für Longrange festgelegt werden.
*   Hier werden die in der radiosettings.hpp definierten Kanalnamen oder Klassennamen der Kanäle verwendet.
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

                channel1 = "Command Kanal";
                channel3 = "net13";
                channel7 = "Command Intern";
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

            channel2 = "Command Kanal";
            channel1 = "OPT Kanal";
        };
    };

    class group2 {
        groupName = "Echo";

        class shortrange {
            defaultChannel = 2;

            channel2 = "Echo Intern";
        };

        class longrange {
            defaultChannel = 2;

            channel2 = "Command Kanal";
        };
    };

    class group3 {
        groupName = "Echo 1";

        class shortrange {
            defaultChannel = 2;
            altChannel = 3;
            altChannelOnlyTL = 1;

            channel2 = "Echo Intern";
            channel3 = "Echo 1 Intern";
        };
    };

    class group4 {
        groupName = "Echo 2";

        class shortrange {
            defaultChannel = 2;
            altChannel = 4;
            altChannelOnlyTL = 1;

            channel2 = "Echo Intern";
            channel4 = "Echo 2 Intern";
        };
    };

    class group5 {
        groupName = "Foxtrott";

        class shortrange {
            defaultChannel = 5;

            channel5 = "Foxtrott Intern";
        };

        class longrange {
            defaultChannel = 2;

            channel2 = "Command Kanal";
        };
    };

    class group6 {
        groupName = "Foxtrott 1";

        class shortrange {
            defaultChannel = 6;
            altChannel = 5;
            altChannelOnlyTL = 1;

            channel6 = "Foxtrott 1 Intern";
            channel5 = "Foxtrott Intern";
        };
    };

    class group7 {
        groupName = "Foxtrott 2";

        class shortrange {
            defaultChannel = 7;
            altChannel = 5;
            altChannelOnlyTL = 1;

            channel7 = "Foxtrott 2 Intern";
            channel5 = "Foxtrott Intern";
        };
    };

    class group8 {
        groupName = "Mike";

        class shortrange {
            defaultChannel = 8;

            channel8 = "Mike Intern";
        };

        class longrange {
            defaultChannel = 2;

            channel2 = "Command Kanal";
        };
    };

    class group9 {
        groupName = "Sierra";

        class shortrange {
            defaultChannel = 1;

            channel1 = "Sierra Intern";

        };

        class longrange {
            defaultChannel = 2;

            channel2 = "Command Kanal";
        };
    };

    class group10 {
        groupName = "Hotel 1";
        class longrange {
            defaultChannel = 2;
            altChannel = 1;

            channel2 = "Command Kanal";
            channel1 = "OPT Kanal";
        };
    };

    class group11 {
        groupName = "Hotel 2";
        class longrange {
            defaultChannel = 2;
            altChannel = 1;

            channel2 = "Command Kanal";
            channel1 = "OPT Kanal";
        };
    };
};

class OPFOR {};

class INDEPENDENT {};

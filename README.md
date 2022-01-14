[![Github CI](https://github.com/jafl/ssh-askpass/actions/workflows/ci.yml/badge.svg)](https://github.com/jafl/ssh-askpass/actions/workflows/ci.yml)
[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?branch=main&project=jafl_ssh-askpass&metric=alert_status)](https://sonarcloud.io/dashboard?id=jafl_ssh-askpass&branch=main)

[![Maintainability Rating](https://sonarcloud.io/api/project_badges/measure?branch=main&project=jafl_ssh-askpass&metric=sqale_rating)](https://sonarcloud.io/dashboard?id=jafl_ssh-askpass&branch=main)
[![Security Rating](https://sonarcloud.io/api/project_badges/measure?branch=main&project=jafl_ssh-askpass&metric=security_rating)](https://sonarcloud.io/dashboard?id=jafl_ssh-askpass&branch=main)
[![Vulnerabilities](https://sonarcloud.io/api/project_badges/measure?branch=main&project=jafl_ssh-askpass&metric=vulnerabilities)](https://sonarcloud.io/dashboard?id=jafl_ssh-askpass&branch=main)

[![Lines of Code](https://sonarcloud.io/api/project_badges/measure?branch=main&project=jafl_ssh-askpass&metric=ncloc)](https://sonarcloud.io/dashboard?id=jafl_ssh-askpass&branch=main)

# SSH Askpass

nps-ssh-askpass does exactly the same job as x11-ssh-askpass, but it's not as hard to compile on MacOS, because it doesn't require xmkmf.


## Requirements

On MacOS, this program requires XQuartz, the X11 server.  Before running this program, you must first start XQuartz.


## Installing a binary

For macOS, the easiest way to install is via [Homebrew](https://brew.sh):

    brew install --cask xquartz
    brew tap jafl/jx
    brew install jafl/jx/nps-ssh-askpass

For all other systems, download a package:

[![Download from Github](http://libjx.sourceforge.net/github.png)](https://github.com/jafl/ssh-askpass/releases/latest)

<a href="https://sourceforge.net/p/nps-ssh-askpass/"><img alt="Download SSH Askpass" src="https://sourceforge.net/sflogo.php?type=17&group_id=170488" width="250"></a>

[![Get it from the Snap Store](https://snapcraft.io/static/images/badges/en/snap-store-white.svg)](https://snapcraft.io/nps-ssh-askpass)

If you download the tar, unpack it, cd into the directory, and run `sudo ./install`.

Otherwise, put the program (`nps-ssh-askpass`) in a directory that is on your execution path.  `~/bin` is typically a good choice.


## Building from source

1. Install the [JX Application Framework](https://github.com/jafl/jx_application_framework),  and set the `JX_ROOT` environment variable to point to its `include` directory.
1. `./configure`
1. `make`


## FAQ

For general questions, refer to the [Programs FAQ](https://github.com/jafl/jx_application_framework/blob/master/APPS.md).

[![Github CI](https://github.com/jafl/ssh-askpass/actions/workflows/ci.yml/badge.svg)](https://github.com/jafl/ssh-askpass/actions/workflows/ci.yml)
[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?branch=main&project=jafl_ssh-askpass&metric=alert_status)](https://sonarcloud.io/dashboard?id=jafl_ssh-askpass&branch=main)

[![Maintainability Rating](https://sonarcloud.io/api/project_badges/measure?branch=main&project=jafl_ssh-askpass&metric=sqale_rating)](https://sonarcloud.io/dashboard?id=jafl_ssh-askpass&branch=main)
[![Security Rating](https://sonarcloud.io/api/project_badges/measure?branch=main&project=jafl_ssh-askpass&metric=security_rating)](https://sonarcloud.io/dashboard?id=jafl_ssh-askpass&branch=main)
[![Vulnerabilities](https://sonarcloud.io/api/project_badges/measure?branch=main&project=jafl_ssh-askpass&metric=vulnerabilities)](https://sonarcloud.io/dashboard?id=jafl_ssh-askpass&branch=main)

[![Lines of Code](https://sonarcloud.io/api/project_badges/measure?branch=main&project=jafl_ssh-askpass&metric=ncloc)](https://sonarcloud.io/dashboard?id=jafl_ssh-askpass&branch=main)

# SSH Askpass

nps-ssh-askpass does exactly the same job as x11-ssh-askpass, but it's not as hard to compile on MacOS, because it doesn't require xmkmf.


## Building from source

1. Install the [JX Application Framework](https://github.com/jafl/jx_application_framework),  and set the `JX_ROOT` environment variable to point to its `include` directory.
1. `makemake`
1. `make`


## Installing a binary

http://sourceforge.net/p/nps-ssh-askpass/

The easiest way to install from the binary package is to run `sudo ./install`

Otherwise, the program (nps-ssh-askpass) should be placed in a directory that is on your execution path.  `/usr/bin` or `~/bin` are usually good choices.  Copy the libraries in `lib/` to a directory on your `LD_LIBRARY_PATH`.

### Requirements

On MacOS, this program requires XQuartz, the X11 server.  Before running this program, you must first start XQuartz.


## FAQ

For general questions, refer to the [Programs FAQ](https://github.com/jafl/jx_application_framework/blob/master/APPS.md).

#!/bin/bash

find . -name '*.sh' -print0 |  xargs -0 basename -s .sh

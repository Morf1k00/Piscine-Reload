#!/bin/sh
ifconfig | grep -e "^\tether" | cut -d " " -f2
#!/bin/bash
ifconfig | grep "..:..:..:..:..:.." | cut -d ' ' -f2

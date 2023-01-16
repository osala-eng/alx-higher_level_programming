#!/bin/bash
# Post Request
curl -sLX PUT -d 'user_id=98' -H 'Origin:School' "$1"

//
//  uvcCamera.h
//  PICS
//
//  Created by Michael Kwasnicki on 29.10.17.
//  Copyright © 2017 Michael Kwasnicki. All rights reserved.
//

#ifndef uvcCamera_h
#define uvcCamera_h


#include <stddef.h>
#include <stdint.h>


void uvcInit(int device);
void uvcDeinit(int device);

void uvcConnectClient(int device);
void uvcDisconnectClient(int device);

void uvcGetImage(int device, uint8_t **data, size_t *len);
void uvcGetImageDone(int device);


#endif /* uvcCamera_h */

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HAPPairingUtilities : HMFObject
+(id)createAddPairingRequetForPairingIdentity:(id)arg1 error:(id*)arg2 ;
+(id)createRemovePairingRequetForPairingIdentity:(id)arg1 error:(id*)arg2 ;
+(BOOL)parseRemovePairingResponse:(id)arg1 error:(id*)arg2 ;
+(BOOL)parseAddPairingResponse:(id)arg1 error:(id*)arg2 ;
+(id)createListPairingsRequest:(id*)arg1 ;
+(id)parseListPairingsResponse:(id)arg1 error:(id*)arg2 ;
@end


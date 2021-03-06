/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSgPTPFDEtEPort.h>

@interface TSgPTPUnicastUDPv6EtEPort : TSgPTPFDEtEPort
+(id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2 ;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv6Address:(char*)arg2 ;
-(id)initWithService:(id)arg1 ;
-(int)portType;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(id)_sourceAddressString;
-(id)_destinationAddressString;
-(id)initWithInterfaceName:(id)arg1 andIPv6Address:(char*)arg2 ;
@end


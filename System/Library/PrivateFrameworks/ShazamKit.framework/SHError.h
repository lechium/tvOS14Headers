/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:40 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SHError : NSObject
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 ;
+(BOOL)annotateClientError:(id*)arg1 code:(long long)arg2 underlyingError:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 keyOverrides:(id)arg3 ;
+(id)messageForCode:(long long)arg1 ;
+(BOOL)annotateClientError:(id*)arg1 code:(long long)arg2 underlyingError:(id)arg3 keyOverrides:(id)arg4 ;
@end

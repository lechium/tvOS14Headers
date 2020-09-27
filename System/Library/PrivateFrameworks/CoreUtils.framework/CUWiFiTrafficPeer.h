/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CUWiFiTrafficPeer : NSObject {

	BOOL _active;
	unsigned _trafficFlags;
	NSString* _sessionID;
	SCD_Union_CU22 _peerIP;

}

@property (assign,nonatomic) BOOL active;                                   //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* peerIP;              //@synthesize peerIP=_peerIP - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned trafficFlags;                         //@synthesize trafficFlags=_trafficFlags - In the implementation block
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(void)setTrafficFlags:(unsigned)arg1 ;
-(unsigned)trafficFlags;
-(void)setPeerIP:(/*function pointer*/void*)arg1 ;
-(id)peerMACAddressData;
-(/*function pointer*/void*)peerIP;
@end

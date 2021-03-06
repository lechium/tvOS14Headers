/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiAwareDatapathXPCDelegate <NSObject>
@required
-(void)datapathStartedWithInstanceID:(unsigned char)arg1 initiatorDataAddress:(id)arg2 localInterfaceIndex:(unsigned)arg3;
-(void)datapathFailedToStartWithError:(long long)arg1;
-(void)datapathConfirmedForPeerDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2;
-(void)datapathReceivedControlDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2 onInterfaceIndex:(unsigned)arg3;
-(void)datapathTerminatedWithReason:(long long)arg1;

@end


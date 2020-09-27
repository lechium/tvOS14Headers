/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCControlChannelTransactionDelegate <NSObject>
@property (readonly) BOOL isEncryptionEnabled; 
@required
-(BOOL)isParticipantActive:(unsigned long long)arg1;
-(void)addToSentStats:(int)arg1;
-(BOOL)isEncryptionEnabled;
-(id)lastUsedMKIBytes;
-(void)scheduleAfter:(unsigned)arg1 block:(/*^block*/id)arg2;
-(void)addToReceivedStats:(int)arg1;

@end

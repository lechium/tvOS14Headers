/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCObject.h>

@class VCMockIDSDatagramChannel;

@interface VCMockIDSDatagramChannelController : VCObject {

	VCMockIDSDatagramChannel* _datagramChannel;

}
+(id)sharedInstance;
-(void)dealloc;
-(void)invalidate;
-(id)datagramChannelRequiresOptions:(BOOL)arg1 ;
-(void)setWriteDatagramsBlock:(/*^block*/id)arg1 ;
-(void)setWriteDatagramBlock:(/*^block*/id)arg1 ;
-(void)setReadyToReadBlock:(/*^block*/id)arg1 ;
@end

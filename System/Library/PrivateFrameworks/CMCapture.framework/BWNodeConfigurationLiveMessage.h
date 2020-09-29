/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:38 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/BWNodeMessage.h>

@class BWFormat;

@interface BWNodeConfigurationLiveMessage : BWNodeMessage {

	long long _configurationID;
	BWFormat* _updatedFormat;

}

@property (readonly) long long configurationID; 
@property (readonly) BWFormat * updatedFormat; 
+(id)newMessageWithConfigurationID:(long long)arg1 ;
+(id)newMessageWithConfigurationID:(long long)arg1 updatedFormat:(id)arg2 ;
-(void)dealloc;
-(long long)configurationID;
-(BWFormat *)updatedFormat;
-(id)_initWithConfigurationID:(long long)arg1 updatedFormat:(id)arg2 ;
@end


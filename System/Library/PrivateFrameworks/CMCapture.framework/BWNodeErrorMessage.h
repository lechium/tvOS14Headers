/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:38 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/BWNodeMessage.h>

@class BWNodeError;

@interface BWNodeErrorMessage : BWNodeMessage {

	BWNodeError* _nodeError;

}

@property (readonly) BWNodeError * nodeError; 
+(id)newMessageWithNodeError:(id)arg1 ;
-(void)dealloc;
-(BWNodeError *)nodeError;
-(id)_initWithNodeError:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:14 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFStateDumpable.h>

@class NSDictionary;

@interface MediaFoundation.ItemBufferProducer : _UKNOWN_SUPERCLASS_ <MFStateDumpable> {

	 maximumBufferLength;
	 hasReachedQueueEnd;
	 consumer;
	 buffer;
	 dataSource;
	 reporter;
	 cursor;

}

@property (readonly,nonatomic) NSDictionary * stateDictionary; 
-(NSDictionary *)stateDictionary;
@end

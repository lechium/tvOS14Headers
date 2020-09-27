/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface CUIDSWriteRequest : NSObject {

	const char* writeBase;
	const char* writePtr;
	const char* writeEnd;
	CUIDSWriteRequest* next;
	NSData* _data;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completion;                //@synthesize completion=_completion - In the implementation block
-(NSData *)data;
-(id)completion;
-(void)setData:(NSData *)arg1 ;
-(void)setCompletion:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFDataConsumer.h>

@class NSMutableArray, NSArray, NSString;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {

	NSMutableArray* _consumers;
	BOOL _serialAppend;

}

@property (assign,getter=isSerialAppend,nonatomic) BOOL serialAppend;              //@synthesize serialAppend=_serialAppend - In the implementation block
@property (nonatomic,readonly) NSArray * consumers;                                //@synthesize consumers=_consumers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)filterWithConsumers:(id)arg1 ;
+(id)filterWithConsumer:(id)arg1 ;
-(void)dealloc;
-(long long)appendData:(id)arg1 ;
-(void)done;
-(id)initWithConsumer:(id)arg1 ;
-(id)initWithConsumers:(id)arg1 ;
-(BOOL)isSerialAppend;
-(void)setSerialAppend:(BOOL)arg1 ;
-(NSArray *)consumers;
@end


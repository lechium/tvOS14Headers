/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSArray;

@interface IMXMLParserContext : NSObject {

	NSData* _inContentAsData;

}

@property (retain,readonly) NSData * inContentAsData;                 //@synthesize inContentAsData=_inContentAsData - In the implementation block
@property (retain,readonly) NSString * name; 
@property (retain,readonly) NSArray * resultsForLogging; 
-(NSString *)name;
-(void)dealloc;
-(void)reset;
-(id)initWithContent:(id)arg1 ;
-(NSArray *)resultsForLogging;
-(NSData *)inContentAsData;
-(id)initWithContentAsData:(id)arg1 ;
-(id)inContent;
@end

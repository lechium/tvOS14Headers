/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSMutableArray, MFCountingDataConsumer, MFBaseFilterDataConsumer;

@interface MFIMAPDownload : NSObject {

	unsigned _uid;
	NSMutableArray* _pendingFetchResults;
	MFCountingDataConsumer* _countingConsumer;
	MFBaseFilterDataConsumer* _mainConsumer;

}

@property (nonatomic,readonly) MFBaseFilterDataConsumer * mainConsumer;              //@synthesize mainConsumer=_mainConsumer - In the implementation block
-(void)dealloc;
-(id)data;
-(id)error;
-(void)setError:(id)arg1 ;
-(BOOL)isComplete;
-(unsigned)uid;
-(unsigned long long)expectedLength;
-(id)initWithUid:(unsigned)arg1 ;
-(unsigned long long)bytesFetched;
-(void)handleFetchResult:(id)arg1 ;
-(void)processResults;
-(void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2 ;
-(unsigned long long)lengthOfDataBeforeLineConversion;
-(MFBaseFilterDataConsumer *)mainConsumer;
@end


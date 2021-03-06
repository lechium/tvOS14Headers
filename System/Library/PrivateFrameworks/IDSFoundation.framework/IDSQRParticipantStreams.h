/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSMutableArray;

@interface IDSQRParticipantStreams : NSObject {

	NSNumber* _participantID;
	NSMutableArray* _streamArray;
	BOOL _anyParticipant;
	BOOL _anyStream;

}

@property (readonly) NSNumber * participantID;                   //@synthesize participantID=_participantID - In the implementation block
@property (readonly) NSMutableArray * streamArray;               //@synthesize streamArray=_streamArray - In the implementation block
@property (nonatomic,readonly) BOOL anyParticipant;              //@synthesize anyParticipant=_anyParticipant - In the implementation block
@property (nonatomic,readonly) BOOL anyStream;                   //@synthesize anyStream=_anyStream - In the implementation block
+(id)streamWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(BOOL)arg3 anyStream:(BOOL)arg4 ;
-(id)description;
-(NSNumber *)participantID;
-(id)initWithParticipantID:(id)arg1 streamArray:(id)arg2 anyParticipant:(BOOL)arg3 anyStream:(BOOL)arg4 ;
-(NSMutableArray *)streamArray;
-(BOOL)anyParticipant;
-(BOOL)anyStream;
@end


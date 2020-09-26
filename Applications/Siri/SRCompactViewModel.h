//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, SRSpeechRecognitionHypothesis;

@interface SRCompactViewModel : NSObject <NSCopying>
{
    NSArray *_resultTranscriptItems;	// 8 = 0x8
    NSArray *_conversationTranscriptItems;	// 16 = 0x10
    NSArray *_serverUtterances;	// 24 = 0x18
    SRSpeechRecognitionHypothesis *_speechRecognitionHypothesis;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100032db4
@property(readonly, copy, nonatomic) SRSpeechRecognitionHypothesis *speechRecognitionHypothesis; // @synthesize speechRecognitionHypothesis=_speechRecognitionHypothesis;
@property(readonly, copy, nonatomic) NSArray *serverUtterances; // @synthesize serverUtterances=_serverUtterances;
@property(readonly, copy, nonatomic) NSArray *conversationTranscriptItems; // @synthesize conversationTranscriptItems=_conversationTranscriptItems;
@property(readonly, copy, nonatomic) NSArray *resultTranscriptItems; // @synthesize resultTranscriptItems=_resultTranscriptItems;
- (id)copyWithServerUtterances:(id)arg1 speechRecognitionHypothesis:(id)arg2;	// IMP=0x0000000100032cac
- (id)copyWithSpeechRecognitionHypothesis:(id)arg1;	// IMP=0x0000000100032bc8
- (id)copyWithResultTranscriptItems:(id)arg1;	// IMP=0x0000000100032af0
- (id)copyWithResultTranscriptItems:(id)arg1 conversationTranscriptItems:(id)arg2 serverUtterances:(id)arg3 speechRecognitionHypothesis:(id)arg4;	// IMP=0x0000000100032a38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100032a34
- (id)description;	// IMP=0x00000001000327d8
- (id)init;	// IMP=0x00000001000327b8
- (id)initWithSpeechRecognitionHypothesis:(id)arg1;	// IMP=0x0000000100032798
- (id)initWithResultTranscriptItems:(id)arg1 conversationTranscriptItems:(id)arg2 serverUtterances:(id)arg3 speechRecognitionHypothesis:(id)arg4;	// IMP=0x0000000100032668

@end

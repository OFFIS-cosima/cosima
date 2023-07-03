//
// Generated file, do not edit! Created by nedtool 5.6 from messages/MosaikApplicationChunk.msg.
//

#ifndef __MOSAIKAPPLICATIONCHUNK_M_H
#define __MOSAIKAPPLICATIONCHUNK_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



class MosaikApplicationChunk;
#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

// cplusplus {{
    const inet::B CHUNK_LENGTH; 
// }}

/**
 * Class generated from <tt>messages/MosaikApplicationChunk.msg:23</tt> by nedtool.
 * <pre>
 * class MosaikApplicationChunk extends inet::FieldsChunk
 * {
 *     chunkLength = CHUNK_LENGTH;
 *     simtime_t creationTime;
 *     string content;
 *     string receiver;
 *     string sender;
 *     string msgId;
 *     int creationTimeMosaik;
 *     bool isTrafficMessage;
 *     bool isFalsified;
 * }
 * </pre>
 */
class MosaikApplicationChunk : public ::inet::FieldsChunk
{
  protected:
    omnetpp::simtime_t creationTime = SIMTIME_ZERO;
    omnetpp::opp_string content;
    omnetpp::opp_string receiver;
    omnetpp::opp_string sender;
    omnetpp::opp_string msgId;
    int creationTimeMosaik = 0;
    bool isTrafficMessage_ = false;
    bool isFalsified_ = false;

  private:
    void copy(const MosaikApplicationChunk& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MosaikApplicationChunk&);

  public:
    MosaikApplicationChunk();
    MosaikApplicationChunk(const MosaikApplicationChunk& other);
    virtual ~MosaikApplicationChunk();
    MosaikApplicationChunk& operator=(const MosaikApplicationChunk& other);
    virtual MosaikApplicationChunk *dup() const override {return new MosaikApplicationChunk(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual omnetpp::simtime_t getCreationTime() const;
    virtual void setCreationTime(omnetpp::simtime_t creationTime);
    virtual const char * getContent() const;
    virtual void setContent(const char * content);
    virtual const char * getReceiver() const;
    virtual void setReceiver(const char * receiver);
    virtual const char * getSender() const;
    virtual void setSender(const char * sender);
    virtual const char * getMsgId() const;
    virtual void setMsgId(const char * msgId);
    virtual int getCreationTimeMosaik() const;
    virtual void setCreationTimeMosaik(int creationTimeMosaik);
    virtual bool isTrafficMessage() const;
    virtual void setIsTrafficMessage(bool isTrafficMessage);
    virtual bool isFalsified() const;
    virtual void setIsFalsified(bool isFalsified);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MosaikApplicationChunk& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MosaikApplicationChunk& obj) {obj.parsimUnpack(b);}

#endif // ifndef __MOSAIKAPPLICATIONCHUNK_M_H

#ifndef PARTICLE_ENGINE_H_
#define PARTICLE_ENGINE_H_

// features to add

// for starters: assume all emissions come from the origin

class ParticleEngine {
 public:
  /**
   *  Creates a new particle engine
   */ 
  ParticleEngine();

  /**
   *  Prepares to emit particles.
   *  @param emit_count_ - number of new particles to emit
   */ 
  void Emit(unsigned int emit_count_);

  /**
   *  Renders the particle system (this sucks but its also a demo lole)
   */ 
  void Render();
 private:
  unsigned int emit_count_;
};



#endif
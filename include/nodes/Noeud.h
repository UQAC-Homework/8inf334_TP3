#ifndef INC_8INF334_TP3_NOEUD_H
#define INC_8INF334_TP3_NOEUD_H

namespace nodes
{
	class Noeud
	{
	public:
		virtual ~Noeud() = default;

		/// Executes this node
		[[nodiscard]] virtual Noeud* executer() = 0;
	};
}

#endif //INC_8INF334_TP3_NOEUD_H
